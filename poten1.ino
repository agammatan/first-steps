void setup() { 
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}


void loop() {
  int senVal = analogRead(A0);
  float Brt = senVal/4;
  Serial.println(senVal);

  delay(10);
  if( senVal > 800){
    analogWrite(3, Brt);
  }
  if( senVal < 800){
    analogWrite(3, Brt);
  }
  }


  

