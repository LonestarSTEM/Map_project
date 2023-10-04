int led5Pin = 7; //define the leds by using the pin numbers used
int led4Pin = 6; //along with assigning them with a name. I used 1-5.
int led3Pin = 5;
int led2Pin = 4;
int led1Pin = 3;
int button5Pin = 13; //define the buttons by using the ping numbers used
int button4Pin = 12; //along with assigning them with a name. I used 1-5
int button3Pin = 11;
int button2Pin = 10;
int button1Pin = 9;
void setup() {
  pinMode(led1Pin,OUTPUT);
  pinMode(button1Pin,INPUT_PULLUP);
    pinMode(led2Pin,OUTPUT);
  pinMode(button2Pin,INPUT_PULLUP);
    pinMode(led3Pin,OUTPUT);
  pinMode(button3Pin,INPUT_PULLUP);
    pinMode(led4Pin,OUTPUT);
  pinMode(button4Pin,INPUT_PULLUP);
    pinMode(led5Pin,OUTPUT);
  pinMode(button5Pin,INPUT_PULLUP);
  //assign the inputs and outputs of the pins used
}

void loop() {

  if(digitalRead(button1Pin)==LOW)//if button is pressed down then the following happens
  {
    digitalWrite(led1Pin,HIGH);//led will turn on
    delay(4000);//Wait 4 seconds
    digitalWrite(led1Pin,LOW);//then turn off
  }//this only happens when the first button is pressed or "Button1"

  if(digitalRead(button2Pin)==LOW)
  {
    digitalWrite(led2Pin,HIGH);
    delay(4000);  
    digitalWrite(led2Pin,LOW); 
  }

  if(digitalRead(button3Pin)==LOW)
  {
    digitalWrite(led3Pin,HIGH);
    delay(4000);
    digitalWrite(led3Pin,LOW);
  }

  if(digitalRead(button4Pin)==LOW)
  {
    digitalWrite(led4Pin,HIGH);
    delay(4000);
    digitalWrite(led4Pin,LOW);
  }

  if(digitalRead(button5Pin)==LOW)
  {
    digitalWrite(led5Pin,HIGH);
    delay(4000);
    digitalWrite(led5Pin,LOW);
  }
}
