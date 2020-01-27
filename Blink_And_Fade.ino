/*
  Code by Hassan
  written on 24/01/2020
*/
 int pin = 8;
 int led = 7;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup function runs once when you press reset or power the board
void setup() {
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pin, OUTPUT);
   // declare pin 7 to be an output:
  
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
   //delay(3000);                          // wait for a second
  //digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
   //delay(3000);                      // wait for a second
   // set the brightness of pin 7:
  analogWrite(led, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  if (brightness == 255) {
       digitalWrite(pin,HIGH);
  }else if(brightness==0){
    digitalWrite(pin,LOW);
  }
    
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
