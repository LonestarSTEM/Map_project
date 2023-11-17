#include <Adafruit_MCP23X17.h> //Using Adafruit library for MCP23017

Adafruit_MCP23X17 mcp0; //Instantiate mcp object
Adafruit_MCP23X17 mcp1; //Instantiate mcp object
int dly=250; // 1/4 second delay
const static int buttons[] = {8,9,10,11,12,13,14,15}; // Pins on MCP
const static int lights[] = {0,1,2,3,4,5,6,7};//Pins on MCP

void setup() {
  Serial.begin(9600);
  mcp0.begin_I2C(0x20);// 000-Gnd,Gnd,Gnd-using chip Address along with hardwiring to declare these seperately.
  mcp1.begin_I2C(0x21);// 001-Gnd,Gnd,5v.
 
  for(int x = 0; x < sizeof(buttons)/sizeof(int); x++) // Iterates through all buttons
  {
    mcp0.pinMode(buttons[x], INPUT_PULLUP); // Places Pin "x" into a natural HIGH state
  } 
  for(int x = 0; x < sizeof(lights)/sizeof(int); x++) // Iterates through all LEDs
  {
    mcp0.pinMode(lights[x], OUTPUT); // Set LEDs to output
  } 
  for(int x = 0; x < sizeof(buttons)/sizeof(int); x++) // Iterates through all buttons
  {
    mcp1.pinMode(buttons[x], INPUT_PULLUP); // Places Pin "x" into a natural HIGH state
  } 
  for(int x = 0; x < sizeof(lights)/sizeof(int); x++) // Iterates through all LEDs
  {
    mcp1.pinMode(lights[x], OUTPUT); // Set LEDs to output
  } 
}

void loop() {
  for(int x = 0; x < sizeof(buttons)/sizeof(int); x++) // Iterate through all buttons
  {
    if (mcp0.digitalRead(buttons[x]) == LOW) // Check state of buttons
    {
        mcp0.digitalWrite(lights[x], HIGH); // Turn on LED
        delay(4000); // Wait
        mcp0.digitalWrite(lights[x], LOW); // Turn off LED
    }
  }
  for(int x = 0; x < sizeof(buttons)/sizeof(int); x++) // Iterate through all buttons
  {
    if (mcp1.digitalRead(buttons[x]) == LOW) // Check state of buttons
    {
        mcp1.digitalWrite(lights[x], HIGH); // Turn on LED
        delay(4000); // Wait
        mcp1.digitalWrite(lights[x], LOW); // Turn off LED
    }
  }
}
