int trigPin=11;
int echoPin=12;
long duration;
long distance;

void setup(){
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  long cmdistance = (duration/2)/29.1;
  long inchdistance=(duration/2)/74;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance in cm: ");
  Serial.println(cmdistance);
  delay(10);
  Serial.print("Distance in inches :");
  Serial.println(inchdistance);
  delay(10);
}