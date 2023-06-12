#include <PZEM004Tv30.h>
// use mega sert port 2 pis 16,17
PZEM004Tv30 pzem1(Serial2,0x01);
// dfault pzem address is 0x01
// try dff add 
PZEM004Tv30 pzem7(Serial2,0x07);
//PZEM004Tv30 pzem2(Serial2);
// if no address ass above it wll read default 0x01
void setup() {
 Serial.begin(115200);
}
void loop() {
  // first use global address to get unit add
    Serial.print("Current address:");
    Serial.println(pzem7.getAddress());
    Serial.println();
    Serial.println(pzem1.voltage());
    Serial.println();
    delay(1000);
    Serial.println(pzem7.voltage());
    Serial.println();
    // this prints "nan" cos no pzem2
    delay(1000);
}
