#include <Arduino.h>  // library for arduino    
#include <LiquidCrystal.h> // library for LCD display Reference : Arduino  IDE Website
#include <Servo.h>   // library for Servo motor

// Intialize Pin for LCD Display
int D7_pin = 7;
int D6_pin = 6;
int D5_pin = 5;
int D4_pin = 4;
int EN_pin = 12; // Initialize enable
int RS_pin = 11; //  Initialize Reset PIN 
LiquidCrystal lcd(RS_pin, EN_pin, D4_pin, D5_pin, D6_pin, D7_pin);  // Function for Lcd display

Servo myservo1;  // Initialize Servo Motor

 int IR1 = 8; // IR Sensor 1  
 int IR2 = 10; // IR Sensor 2  
 int Slot = 4;      //Enter Total number of parking Slots  
 int flag1 = 0;  
 int flag2 = 0;  
const int buzzer = 13; // initialize Buzzer 
const int LED=3; // Intialize Pin for Led 


 void setup()  
 {  
 lcd.begin(16,2);        // Initialize LCD display
 pinMode(IR1, INPUT);   // Configure IR SENSOR 1 to read input 
 pinMode(IR2, INPUT);  // Configure IR SENSOR 2 to read input
 myservo1.attach(9);  // Configure Servo to pin 9
 myservo1.write(100);  
 lcd.setCursor (0,0);  // Display Lcd text
 lcd.print("   ARDUINO  ");  
 lcd.setCursor (0,1);  
 lcd.print(" PARKING SYSTEM ");  
 delay (2000);  
 lcd.clear();  
 pinMode(buzzer, OUTPUT); // set buzzer -pin as output
 pinMode(LED,OUTPUT);// Set LED - pin  as an output 
 }  
 void loop(){   
 
 if(digitalRead (IR1) == LOW && flag1==0) // IR SENSOR 1 detects the vehicle it checks slot availability
 {  
 if(Slot>0){
  flag1=1;  
 if(flag2==0){
  myservo1.write(0); 
  Slot = Slot-1;  // If vehicle  parked calculate for remaining slot
  }  
 }
 else{  
 lcd.setCursor (0,0);  
 lcd.print("  SORRY 🙁  ");   //Display Sorry If slot full
 lcd.setCursor (0,1);  
 lcd.print(" Parking Full ");   
 delay (1000);  
 lcd.clear(); 
 if(Slot==0)
 { 
  // Slot is full LED will on and buzzer will indicate sound signal 
   digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(1000);                    
   digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
   delay(1000); 
   tone(buzzer, 1000); // Send 1KHz sound signal...
   delay(1000);        
   noTone(buzzer);     // Stop sound...
   delay(1000);        
     
 }
 }  
 }  
 if(digitalRead (IR2) == LOW && flag2==0){flag2=1;  // IR sensor 2 will initialize and detects vehicle to enter slot
 if(flag1==0){myservo1.write(0); Slot = Slot+1;}  // slot avaialble servo as barrier open and count slot availability 
 }  
 if(flag1==1 && flag2==1){  
 delay (1000);  
 myservo1.write(100);  
 flag1=0, flag2=0;  
 }  
 lcd.setCursor (0,0);   // LCD dispay WELCOME for the car enetering parking
 lcd.print("  WELCOME!  ");  
 lcd.setCursor (0,1);  
 lcd.print("Slot Left: ");  
 lcd.print(Slot);  
 }  
