//Tom er mega sejereje
#include <stdio.h>
int incomingByte = 0;
 char arr[] = {3,7,12};
  
  void setup() {
  Serial.begin(9600);
  }

void loop() {
if (Serial.available() >0)
  incomingByte = Serial.read();

  if(arr[0]==incomingByte=48)
    // blink ok / 1 gang)
    if (arr[2] == incomingByte=48)
      //blink 2 gange
    if (arr[2] == incomingByte=48)
      //åben dør
 else
 // blink hurtigt rød

Serial.print("I received");
Serial.println (incomingByte, DEC);
}
