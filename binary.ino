void setup() {
  for(int i = 5 ; i <= 8 ; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for(int i = 0 ; i <= 15 ; i++) {
    int num = i;
    int ans[4] = {0};
    int k = 3;
    while(num != 0) {
      int remainder = num % 2;
      ans[k] = remainder;
      k--;
      num = num / 2;
    }
    digitalWrite(5, ans[3]);
    digitalWrite(6, ans[2]);
    digitalWrite(7, ans[1]);
    digitalWrite(8, ans[0]);
    delay(1000);
    for(int i = 5 ; i <=8 ; i++) {
      digitalWrite(i, LOW);
    }
    delay(1000);
  }
}
