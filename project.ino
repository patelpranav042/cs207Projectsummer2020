//Code :

/* Smart Parking Management System
    With help of this project we can help reducing traffic problem and help save fuel.

    For circuit, we have first put two buttons each as entry button and exit button connected to A0, A1 respactively.
    After that a servo motor is connected as barrier for entry and exit in parking spot.
    A RGB led works as a signal in parking and it's pin are connected to 12 and 13 as red and green. we have not connected blue pin.
    lastly, LCD display is there connected to notify drivers if there is spot available or not and if available so how many.
    pin number 2 to 7 are used to connect lcd display.

    Written by Smit Patel and Pranav Patel
    Written on August 21 2020
*/
#include <Servo.h> // including servo library
#include <LiquidCrystal.h> //including library for lcd display
Servo myservo; // naming servo motor

const int redPin = 12; // connecting red pin of RGB
const int greenPin = 13; // connecting green pin of RGB
int entrybutton = 0; // initiallizing button
int exitbutton = 0;
int spot = 7; // number of spots in parking
float start = true;
float empty_space_available = true;
const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2; // connecting led pins
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int entrybuttonPin = A0; // entry button is connected to pin A0
const int exitbuttonPin = A1;

float curButton1 = HIGH; // setting Button State Variables as high
float lastButton1 = HIGH;
float curButton2 = HIGH;
float lastButton2 = HIGH;


void setup()
{
  myservo.attach(9); // servo pin connected to pin 9
  pinMode(redPin, OUTPUT); // Set up RGB LED pins
  pinMode(greenPin, OUTPUT);
  myservo.write(0); // setting barrier at 0 degrees
  lcd.begin(16, 2);
  lcd.print("Welcome "); // printing on display
  lcd.setCursor(0, 1); // set cursor to second line
  lcd.print("spots available: ");
  lcd.print(spot);
  digitalWrite(redPin, HIGH); // setting RGB to red
  pinMode(entrybuttonPin, INPUT); //Set up button pin
  pinMode(exitbuttonPin, INPUT);
  digitalWrite(entrybuttonPin, HIGH);
  digitalWrite(exitbuttonPin, HIGH);
}

void loop()
{
  entrybutton = digitalRead(entrybuttonPin);
  exitbutton = digitalRead(exitbuttonPin);

  lastButton1 = curButton1; //Store Last Button State
  lastButton2 = curButton2;

  curButton1 = digitalRead(entrybuttonPin); //Read Current Button
  curButton2 = digitalRead(exitbuttonPin);

  if (curButton1 == HIGH && lastButton1 == LOW && spot > 0) // if entry button is pressed
  {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    myservo.write(90); // set barrier to open or 90 degrees
    delay(5000); // wait for 5 second
    digitalWrite(greenPin, LOW);
    myservo.write(0);
    digitalWrite(redPin, HIGH);
    spot = spot - 1; // decreasing spots
    lcd.clear(); // clearing display
    lcd.print("Welcome ");
    lcd.setCursor(0, 1);
    lcd.print("spots available: ");
    lcd.print(spot);
  }

  if (curButton2 == HIGH && lastButton2 == LOW && spot < 3)// if exit button is pressed
  {
    digitalWrite(greenPin, HIGH);
    myservo.write(90);
    delay(5000);
    digitalWrite(greenPin, LOW);
    myservo.write(0);
    digitalWrite(redPin, HIGH);
    spot = spot + 1;
    lcd.clear();
    lcd.print("Welcome ");
    lcd.setCursor(0, 1);
    lcd.print("spots available: ");
    lcd.print(spot);
  }

  if (spot == 0) // if no spots available
  {
    empty_space_available = false;
    lcd.clear();
    lcd.print("Sorry!!");
    lcd.setCursor(0, 1);
    lcd.print("No Spots");
  }
}
