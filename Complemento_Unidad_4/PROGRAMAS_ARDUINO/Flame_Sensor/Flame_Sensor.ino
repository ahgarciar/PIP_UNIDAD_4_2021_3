int flame = 4;

void setup() {
  Serial.begin (9600);
  pinMode(flame, INPUT_PULLUP);
}

int val;
void loop() {

  val = digitalRead(flame);
  Serial.println("Señal:" + String(val));
  
  delay(100);
}
