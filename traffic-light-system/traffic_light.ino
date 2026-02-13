const int green_light = 13;
const int yellow_light = 11;
const int red_light = 9;

void setup() {
  pinMode(green_light, OUTPUT);
  pinMode(yellow_light, OUTPUT);
  pinMode(red_light, OUTPUT);
}

void loop() {
  digitalWrite(red_light, LOW);
  digitalWrite(green_light, HIGH);
  delay(5000);
  
  digitalWrite(green_light, LOW);
  digitalWrite(yellow_light, HIGH);
  delay(2000);
  
  digitalWrite(yellow_light, LOW);
  digitalWrite(red_light, HIGH);
  delay(5000);
}