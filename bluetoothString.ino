#include<SoftwareSerial.h>

//Create an object named bt of the class SoftwareSerial 
SoftwareSerial bt(0,1);     // (Rx,Tx) pins defined  

void setup() 
{
  bt.begin(9600);    // Define baud rate for software serial communication 
  Serial.begin(9600);     // Define baud rate for serial communication 

}




void loop() {
  //char input[10];       /* The char array was an alternative but here we would be stuck with limited number of characters.*/
  String input;
    if (bt.available())
      { 
      input=bt.readString();
      
      //use input.trim() to compare with if statements.
    
    //Serial.println(input); 
    //Print character received on to the serial monitor
    //When connected to a smartphone, one can actually transmit data using this code with ease.
    }
}
