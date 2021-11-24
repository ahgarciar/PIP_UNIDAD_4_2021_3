int vibration = 4;

void setup() {
  Serial.begin (9600);
  pinMode(vibration, INPUT_PULLUP);
}

int val;
void loop() {

  val = digitalRead(vibration);
  Serial.println("Señal:" + String(val));
  
  delay(100);
}
