void setup() {
  /*
  for(int i = 7 ; i <= 10 ; i++) {
    pinMode(i, OUTPUT);
  }*/
  Serial.begin(9600);
}
int incomingByte = 1;
int arr[4] = {1,1,1,1};
void loop() {
  /*for(int i = 7 ; i <= 10 ; i++) {
    digitalWrite(i, arr[i-7]);
    delay(500);
    arr[i-7] = 1 - arr[i-7];
  }
  for(int i = 10 ; i >= 7 ; i--) {
    digitalWrite(i, arr[i-7]);
    delay(500);
    arr[i-7] = 1 - arr[i-7];
  }*/
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
     Serial.println(incomingByte);
  }
  for(int i = 7 ; i <= 10 ; i++) {
    digitalWrite(i, LOW);
//    delay(500);
//    arr[i-7] = 1 - arr[i-7];
  }
  digitalWrite(incomingByte-42, HIGH);
  delay(1000);
}
