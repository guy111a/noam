

int pin = A0 ;


void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT) ;

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pin, HIGH);
delay(500) ;
digitalWrite(pin, LOW);
delay(500) ;

}


/*

int led = 13 ;
int trigPin = A1 ;
int echoPin = A0 ;
int laser = A3 ;


void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(laser, OUTPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
  //  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;
  if (distance < 20) {  // This is where the LED On/Off happens
    digitalWrite(led, LOW);
  }
  else {
    digitalWrite(led, HIGH);
  }
  if (distance >= 200 || distance <= 0) {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  if (distance >= 0 && distance <= 5) {
    Serial.println("laser canon");
    digitalWrite(laser, HIGH);
  }
  else {
    digitalWrite(laser, LOW);

  }

  delay(500);
}

 */
