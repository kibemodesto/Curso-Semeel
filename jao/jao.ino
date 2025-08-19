const int ledPin = 13
 void stup()
 {
  pinMode(ledPin,OUTPUT);

 }
  void loop()
  {
    digitalWrite(ledPin,HIGH);
    delay(1000);
  
   digitalwrite(ledPin,LOW);
   delay(1000);
  }