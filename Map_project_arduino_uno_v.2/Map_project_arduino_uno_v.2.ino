const static int buttons[] = { 9, 10, 11, 12, 13 };
const static int lights[] = { 3, 4, 5, 6, 7 };

void setup() {
  // put your setup code here, to run once:
  for(int x = 0; x < sizeof(buttons)/sizeof(int); x++) // Iterates through all buttons
  {
    pinMode(buttons[x], INPUT_PULLUP); // Places Pin "x" into a natural HIGH state
  } 
  for(int x = 0; x < sizeof(lights)/sizeof(int); x++) // Iterates through all LEDs
  {
    pinMode(lights[x], OUTPUT); // Set LEDs to output
  } 
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int x = 0; x < sizeof(buttons)/sizeof(int); x++) // Iterate through all buttons
  {
    if (digitalRead(buttons[x]) == LOW) // Check state of buttons
    {
        digitalWrite(lights[x], HIGH); // Turn on LED
        delay(4000); // Wait
        digitalWrite(lights[x], LOW); // Turn off LED
    }
  } // End of base loop
}


bitshift

pinMode(lights[7] >> 5, HIGH)