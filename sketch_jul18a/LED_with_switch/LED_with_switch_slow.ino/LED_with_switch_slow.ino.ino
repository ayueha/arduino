const int LED = 9;
int i = 0; //count up counter

void setup() {
  pinMode(LED, OUTPUT);

}

void loop() {
  for (i = 0; 1 < 255; i++){
    analogWrite(LED, i);
    delay(10);
  }

  while(i>0){
    analogWrite(LED, i);
    delay(10);
    i--;
  }

}
