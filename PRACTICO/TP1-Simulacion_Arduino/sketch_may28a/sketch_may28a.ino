const int LED1_PIN = 2;
const int LED2_PIN = 3;
const int LED3_PIN = 4;
const int SWITCH1_PIN = 8;
const int SWITCH2_PIN = 9;
const int SWITCH3_PIN = 10;

typedef struct {
    uint8_t entradas : 3 ;
    uint8_t salidas  : 3 ;
} state;

void setup() {

	  pinMode(LED1_PIN, OUTPUT);
	  pinMode(LED2_PIN, OUTPUT);
	  pinMode(LED3_PIN, OUTPUT);
	  pinMode(SWITCH1_PIN, INPUT);
	  pinMode(SWTICH2_PIN, INPUT);
	  pinMode(SWTICH3_PIN, INPUT);

}

void loop() {

    if (digitalRead(SWITCH1_PIN) == HIGH) {
      digitalWrite(LED1_PIN, HIGH);
      state.entradas |= (1<<0);
      state.salidas  |= (1<<0);
    } else {
      digitalWrite(LED1_PIN, LOW);
      state.entradas &= (1<<0);
      state.salidas  &= (1<<0);
    }
    if (digitalRead(SWITCH2_PIN) == HIGH) {
      digitalWrite(LED2_PIN, HIGH);
      state.entradas |= (1<<1);
      state.salidas  |= (1<<1);
    } else {
      digitalWrite(LED2_PIN, LOW);
      state.entradas &= (0<<1);
      state.salidas  &= (1<<1);
    }
    if (digitalRead(SWITCH3_PIN) == HIGH) {
      digitalWrite(LED3_PIN, HIGH);
      state.entradas |= (1<<2);
      state.salidas  |= (1<<2);
    } else {
      digitalWrite(LED3_PIN, LOW);
      state.entradas &= (0<<2);
      state.salidas  &= (1<<2);
    }

    delay(100); // previene rebotes de los botones
  Serial.println("Valores de entrada y salida");

  for (int i = 0 ; i < 3 ; i++) {
    if ( state.entradas & (1<<i)) {
      Serial.println("1 ");
    } else {
      Serial.println("0 ");
  }

  for (int i = 0 ; i < 3 ; i++) {
    if ( state.salidas & (1<<i)) {
      Serial.println("1 ");
    } else {
      Serial.println("0 ");
    }
  }
  delay(500);
    
}
