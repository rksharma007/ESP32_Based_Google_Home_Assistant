//IMPORTING REQUIRED LIBRARIES
#define BLYNK_PRINT Serial
#include <WiFi.h> //Wi-Fi Library
#include <WiFiClient.h> //Blynk Wi-Fi Library
#include <BlynkSimpleEsp32.h> //Blynk ESP32 Library
//DEFINING PIN & CREDENTIALS
int pin = 2; //Selecting Pin 2 LED
char auth[] = “dfjgbsdbn5f4gg6b4add"; //Auth-Token
char ssid[] = "WiFi_SSID"; //Wi-Fi Credentials
char pass[] = "WiFi_Password"

//WRITING IN setup() TO RUN THIS CODE BLOCK ONCE
void setup() { 
Serial.begin(115200); //Setting baud rate
delay(10); //Delay for 10ms 
Serial.print("Connecting to "); //Connecting to Wi-Fi
Serial.println(ssid);
WiFi.begin(ssid, pass);
int wifi_ctr = 0;
while (WiFi.status() != WL_CONNECTED) {
delay(500); 
Serial.print(".");
}
Serial.println("WiFi connected"); //Connection status
//Connecting to Blynk cloud server
Blynk.begin("t5489yqhgq98gy646uy54y",ssid,pass); 
}
//WRITING IN loop() TO RUN THIS CODE BLOCK ON A LOOP
void loop(){
Blynk.run();
}
