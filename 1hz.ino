int speakerPin = 26;      // speaker on digital pin 26

void setup() {
  
  pinMode(speakerPin, OUTPUT);
  
}

void loop() {

    digitalWrite(speakerPin, HIGH);
    delay(500);
    digitalWrite(speakerPin, LOW);
    delay(500);
  
}
