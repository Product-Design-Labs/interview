#include "API.h"

API::API(UARTReceiver& receiver) : _receiver(receiver), _server(80) {}

void API::init() {
  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);

  setupRoutes();
  _server.begin();
}

void API::handleClient() {
  _server.handleClient();
}

void API::setupRoutes() {
  _server.on("/", HTTP_GET, [this]() { serveMainPage(); });
  _server.on("/data", HTTP_GET, [this]() { sendJson(); });
}

void API::serveMainPage() {
  String html = "<!DOCTYPE html><html><head><title>Weather Station</title>"
                "<meta http-equiv='refresh' content='10'><script>"
                "setInterval(function() {fetch('/data').then(response => response.json()).then(data => {"
                "document.getElementById('temp').innerText = data.temperature + ' C';"
                "document.getElementById('hum').innerText = data.humidity + ' %';"
                "});}, 1000);</script></head><body>"
                "<h1>Weather Station</h1>"
                "<p>Temperature: <span id='temp'>--</span></p>"
                "<p>Humidity: <span id='hum'>--</span></p>"
                "</body></html>";
  _server.send(200, "text/html", html);
}

void API::sendJson() {
  String json = "{\"temperature\":\"" + String(_receiver.getTemperature(), 2) + "\","
                "\"humidity\":\"" + String(_receiver.getHumidity(), 2) + "\"}";
  _server.send(200, "application/json", json);
}
