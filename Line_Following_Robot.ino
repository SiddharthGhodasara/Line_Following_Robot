/// LINE FOLLOWING ROBOT ///

#define LeftIR 2      // left infrared sensor
#define RightIR 3      // right infrared sensor

#define LeftMotorForward 4        // left motor moving forward
#define LeftMotorReverse 5        // left motor moving backwards
#define RightMotorForward 6       // right motor moving forward
#define RightMotorReverse 7       // right motor moving backwards

void setup()
{ 
  //Serial.begin(9600);                                          // Serial monitor for debugging purposes
  pinMode(LeftIR, INPUT);
  pinMode(RightIR, INPUT);
  pinMode(LeftMotorForward, OUTPUT);
  pinMode(LeftMotorReverse, OUTPUT);
  pinMode(RightMotorForward, OUTPUT);
  pinMode(RightMotorReverse, OUTPUT);
}

void loop()
{
  //Serial.println(digitalRead(LeftIR))                            // Serial monitor for debugging purposes
  //Serial.println(digitalRead(RightIR))
  
  if((digitalRead(LeftIR)==LOW) && (digitalRead(RightIR)==LOW))     // Move Forward
  {
    digitalWrite(LeftMotorForward, HIGH);
    digitalWrite(LeftMotorReverse, LOW);
    digitalWrite(RightMotorForward, HIGH);
    digitalWrite(RightMotorReverse, LOW);
  }
  
  if((digitalRead(LeftIR)==LOW) && (digitalRead(RightIR)==HIGH))     // Turn Right
  {
    digitalWrite(LeftMotorForward, HIGH);
    digitalWrite(LeftMotorReverse, LOW);
    digitalWrite(RightMotorForward, LOW);
    digitalWrite(RightMotorReverse, LOW);
  }
  
  if((digitalRead(LeftIR)==HIGH) && (digitalRead(RightIR)==LOW))     // Turn Left
  {
    digitalWrite(LeftMotorForward, LOW);
    digitalWrite(LeftMotorReverse, LOW);
    digitalWrite(RightMotorForward, HIGH);
    digitalWrite(RightMotorReverse, LOW);
  }
  
  if((digitalRead(LeftIR)==HIGH) && (digitalRead(RightIR)==HIGH))     // Stop
  {
    digitalWrite(LeftMotorForward, LOW);
    digitalWrite(LeftMotorReverse, LOW);
    digitalWrite(RightMotorForward, LOW);
    digitalWrite(RightMotorReverse, LOW);
  }
  delay(10);
}
