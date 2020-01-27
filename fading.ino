int brightness = 0;    
int i = 5;    

void setup() {
  pinMode(5, OUTPUT);
}


void loop() {
  analogWrite(5, brightness);
  brightness+=i;

  if (brightness <= 0 || brightness >= 255) {
    i*=-1;
  }
  delay(30);
}
