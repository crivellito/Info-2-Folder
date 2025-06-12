void setup () {  
  Serial.begin (115200);
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
}

void loop () {
  unsigned int Dato;
  
  if(Serial.available () ) {	//Si hay dato disponible
    Dato = Serial.parseInt ();	//Lee el dato como entero
    Serial.print ("El dato es: ");
    Serial.println (Dato);
  }

  for(int i = 0 ; i < 3 ; i++){
    if(Dato & (1<<i)){
      if(Dato & (1<<(i+8))){
        digitalWrite (i+2, HIGH);
      }
    } 
  }
  for(int i = 0 ; i < 3 ; i++){
    if(!(Dato & (1<<i))){
      if(!(Dato & (1<<(i+8)))){ 
        digitalWrite (i+2, LOW);
        }
    } 
  }
}
