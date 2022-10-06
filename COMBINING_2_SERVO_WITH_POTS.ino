 #include <Servo.h>
 Servo myservo;
 Servo myservo2;
 
 int val;
 int val2;
 int pot=A0;
 int pot1=A1;
 int pinservo1=10;
 int pinservo2=11;
 
void setup() {
  Serial.begin(9600);
  pinMode(pot, INPUT);
  pinMode(pot1, INPUT);
  pinMode(pinservo1, OUTPUT);
  pinMode(pinservo2, OUTPUT);
myservo.attach(pinservo1);
myservo2.attach(pinservo2);
}

void loop() {
  val=analogRead(pot1);
  val2=analogRead(pot);
  val=map(val, 0,1023, 0,180);
  val2=map(val2, 0,1023, 0,180);
  myservo.write(val);
  myservo2.write(val2);
  Serial.print("servo 1 position :");
  Serial.println(val);
  Serial.print("servo2 position :");
  Serial.println(val2);
  delay(15);
  }
