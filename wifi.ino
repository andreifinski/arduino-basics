#include <ESP8266WiFi.h>
#include <WiFiUdp.h>

#define SSID_TO_CONNECT   "***"
#define WIFI_PASS         "***"
#define CLIENT_NAME   "ichNode"

WiFiClient espClient;

void initWifi()
{
    Serial.print("\nConnecting to ");
    Serial.println(SSID_TO_CONNECT);

    WiFi.begin(SSID_TO_CONNECT, WIFI_PASS);
    WiFi.hostname(CLIENT_NAME);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}

void setup()
{
    Serial.begin(115200);
    Serial.println("Initialising");

    initWifi();
}


void loop()
{

}

