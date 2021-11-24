int gas = 4;

void setup() {
  Serial.begin (9600);
  pinMode(gas, INPUT_PULLUP);
}

int val;
void loop() {

  val = digitalRead(gas);
  Serial.println("Señal:" + String(val));
  
  delay(100);
}
