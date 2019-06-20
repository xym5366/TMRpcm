#include <SD.h>                      // need to include the SD library
//#define SD_ChipSelectPin 53  //example uses hardware SS pin 53 on Mega2560
#define SD_ChipSelectPin 4  //using digital pin 4 on arduino nano 328, can use other pins
#include <TMRpcm.h>           //  also need to include this library...
#include <SPI.h>

TMRpcm tmrpcm;   // create an object for use in this sketch

unsigned long time = 0;
char music[12]="music.wav";
void setup(){

  tmrpcm.speakerPin = 9; //5,6,11 or 46 on Mega, 9 on Uno, Nano, etc
  //Complimentary Output or Dual Speakers:
  //pinMode(10,OUTPUT); Pin pairs: 9,10 Mega: 5-2,6-7,11-12,46-45 
  
  Serial.begin(115200);
  pinMode(13,OUTPUT); //LED Connected to analog pin 0
  if (!SD.begin(SD_ChipSelectPin)) {  // see if the card is present and can be initialized:
    Serial.println("SD fail");  
    return;   // don't do anything more if not

  }
  else{   
    Serial.println("SD ok");   
  }
  tmrpcm.setVolume(5); 
}



void loop(){  
  tmrpcm.play("music.wav"); //the sound file "music" will play each time the arduino powers up, or is reset
  delay(1188000);
  tmrpcm.play("music1.wav");
  delay(620000);
  tmrpcm.play("music2.wav");
  delay(411000);
  tmrpcm.play("music3.wav");
  delay(491000);
  tmrpcm.play("music4.wav");
  delay(699000);
  tmrpcm.play("music5.wav");
  delay(204000);
  tmrpcm.play("music6.wav");
  delay(409000);
  tmrpcm.play("music7.wav");
  delay(1357000);
  tmrpcm.play("music8.wav");
  delay(601000);
  tmrpcm.play("music9.wav");
  delay(333000);
}
