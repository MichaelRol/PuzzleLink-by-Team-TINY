int state;

void setup() {
  // put your setup code here, to run once:

  pinMode(12, OUTPUT); //LED 
  pinMode(11, INPUT); //BUTTON TOUCHED
  digitalWrite(12, HIGH);
  state = 1;
}

void loop() {
  
  // put your main code here, to run repeatedly:
  if (digitalRead(11) == 1) {
    Serial.println("TOUCHED");
    digitalWrite(12, 0);
    delay(100);
  }
//    if (state == 1) {
//      
//      digitalWrite(12, 0);
//      Serial.println(digitalRead(12));
//      state = 0;
//      delay(5);
//    } else {
//      digitalWrite(12, 1);
//      Serial.println(digitalRead(12));
//      state = 1;
//      
//      delay(5);
//      
//    }
}
