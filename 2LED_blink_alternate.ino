 int pinA=8;
 int pinB=7;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  delay(1000);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  delay(1000);
}
