const int potenciometro = A0;
int led = 3;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int leitura = analogRead(potenciometro);

  if(leitura >= 555){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
}
