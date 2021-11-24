int flex = 4;

void setup() {
  Serial.begin (9600);
  pinMode(flex, INPUT_PULLUP);
}

int val;
void loop() {

  val = digitalRead(flex);
  Serial.println("Señal:" + String(val));
  
  delay(100);
}
