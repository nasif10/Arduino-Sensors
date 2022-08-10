#define fsensor 13 
int led = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(fsensor, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  
  if (digitalRead(fsensor) ==1)
      digitalWrite(led, HIGH);
  else 
      digitalWrite(led, LOW);   
}
