void setup() {
  for(int i = 1 ; i <=8 ; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for(int i = 1 ; i <9 ; i++) {
    for(int i = 1 ; i <=8 ; i++) {
      digitalWrite(i, LOW);
    }
    int a = i;
    int b = (i+1) > 8 ? (i-7) : (i+1);
    int c = (i+2) > 8 ? (i-6) : (i+2);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    delay(100);
  }

}
