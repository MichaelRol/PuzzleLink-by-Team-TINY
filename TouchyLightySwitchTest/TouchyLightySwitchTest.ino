/*

*/

void setup() {
    pinMode(12, OUTPUT); //LED INPUT
    pinMode(13, INPUT); //BUTTON TOUCHED
    digitalWrite(12, HIGH);
    // digitalWrite(13, HIGH);

}

void loop() {
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(12, LOW);
    delay(1000);

}
