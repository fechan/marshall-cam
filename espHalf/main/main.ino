#include <WiFi.h>
//#include <esp_sleep.h>
//#include <driver/gpio.h>
//#include <driver/rtc_io.h>

//wifi creds
const char *ssid = "****";
const char *password = "****";

void setup(){
  Serial.begin(115200);

  //WiFi connect
  WiFi.begin(ssid, password);
  WiFi.setSleep(false);

  Serial.print("WiFi connecting");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
}

void loop(){
  //sleep test
  Serial.println("");
  Serial.println("Hello World!");
  delay(1000);
  esp_light_sleep_start();
  Serial.println("");
  Serial.println("Starting to doze off...");
  delay(30000);
  esp_deep_sleep_start();
  Serial.println("");
  Serial.println("Shhhhh, no talking in the library...");
  delay(30000);
}
