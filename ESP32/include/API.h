#ifndef API_H
#define API_H

#include <WebServer.h>
#include "UARTReceiver.h"

#define ssid "ESP32_Access_Point"
#define password "password123"

class API {
public:
  API(UARTReceiver& receiver);
  void init();
  void handleClient();

private:
  UARTReceiver& _receiver;
  WebServer _server;

  void setupRoutes();
  void serveMainPage();
  void sendJson();
};

#endif // API_H
