/* Calibration sketch for HX711 */
 
#include "HX711.h"  // Library needed to communicate with HX711 https://github.com/bogde/HX711
 
//Source https://www.brainy-bits.com/load-cell-and-hx711-with-arduino/
#define DOUT  6  // Arduino pin 6 connect to HX711 DOUT
#define CLK  5  //  Arduino pin 5 connect to HX711 CLK
#define LED 12  //  Arduino Pin 12 connect to negative on LED with resistor
                //  Pin 12 -> resistor -> led -> ground
#define THRESHOLD 1.3 //Reading/InitialReading
HX711 scale(DOUT, CLK);  // Init of library
float initialReading; //Used for relative measurement
void setup() {
  Serial.begin(9600);
  scale.set_scale(1);  // Start scale
  scale.tare();       // Reset scale to zero
  digitalWrite(LED, HIGH);
  initialReading = scale.get_units(100);
  digitalWrite(LED, LOW);
}

void loop() {
  //Absolute Measurement float known_weight = 2000; //Weight of the thing you are measuring
  float current_reading=scale.get_units(5);  // get average of 5 scale readings
  float current_scale=current_reading/initialReading;
  //Absolute Measurement float scale_factor=(current_weight/known_weight);  // divide the result by a known weight
  Serial.print("Raw Reading: ");  // Print the scale factor to use
  Serial.println(current_reading);
  Serial.print("Scaled Reading: ");
  Serial.println(current_scale);
  if(current_scale > THRESHOLD){
    digitalWrite(LED, HIGH);
    delay(300);
  }
  else{
    digitalWrite(LED, LOW);
  }
}
