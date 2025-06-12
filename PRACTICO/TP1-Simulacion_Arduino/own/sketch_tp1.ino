const int LED1_PIN = 2;
const int LED2_PIN = 3;
const int LED3_PIN = 4;
const int SWITCH1_PIN = 8;
const int SWITCH2_PIN = 9;
const int SWITCH3_PIN = 10;

typedef struct {
    uint8_t entradas : 3;
    uint8_t salidas  : 3;
} state;

state estado = {0, 0};

void setup() {
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  pinMode(LED3_PIN, OUTPUT);
  pinMode(SWITCH1_PIN, INPUT);
  pinMode(SWITCH2_PIN, INPUT);
  pinMode(SWITCH3_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(SWITCH1_PIN) == HIGH) {
    digitalWrite(LED1_PIN, HIGH);
    estado.entradas |= (1 << 0);
    estado.salidas  |= (1 << 0);
  } else {
    digitalWrite(LED1_PIN, LOW);
    estado.entradas &= ~(1 << 0);
    estado.salidas  &= ~(1 << 0);
  }

  if (digitalRead(SWITCH2_PIN) == HIGH) {
    digitalWrite(LED2_PIN, HIGH);
    estado.entradas |= (1 << 1);
    estado.salidas  |= (1 << 1);
  } else {
    digitalWrite(LED2_PIN, LOW);
    estado.entradas &= ~(1 << 1);
    estado.salidas  &= ~(1 << 1);
  }

  if (digitalRead(SWITCH3_PIN) == HIGH) {
    digitalWrite(LED3_PIN, HIGH);
    estado.entradas |= (1 << 2);
    estado.salidas  |= (1 << 2);
  } else {
    digitalWrite(LED3_PIN, LOW);
    estado.entradas &= ~(1 << 2);
    estado.salidas  &= ~(1 << 2);
  }

  delay(100);

  Serial.print("Entradas: ");
  for (int i = 0; i < 3; i++) {
    if (estado.entradas & (1<<i)){
      Serial.print("1");
    } else {
      Serial.print("0");
    }
  }
  Serial.println();

  Serial.print("Salidas:  ");
  for (int i = 0; i < 3; i++) {
    if (estado.entradas & (1<<i)){
      Serial.print("1");
      } else {
        Serial.print("0");
        }  
  }
  Serial.println();

  delay(500);
}

