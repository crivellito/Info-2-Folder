void setup() {
  Serial.begin(115200);
}

void loop() {
  if(Serial.available())
  {
    Serial.print("Hola desde Arduino. El mensaje que me has enviado fue: " + Serial.readStringUntil('\n'));
  }
  
}
