int speakerPin = 26;      // speaker on digital pin 26
float frequency = 440;    // in hertz. 440Hz is the note A4
float duration = 2;         // in seconds

// Period is the inverse of frequency, measured in seconds. 
// To obtain microseconds we multiply by 1 million. 
// And to obtain half of period 
// (the time in either "on" or "off" state), we divide by 2.
float delayInMicroseconds = 1/frequency*1000000/2;

// Calculate number of loop iterations for the required duration
int numberOfIterations = duration*frequency;

void setup() {

  pinMode(speakerPin, OUTPUT);
  
  for (int f=0; f < numberOfIterations; f++) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(delayInMicroseconds);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(delayInMicroseconds);
  }
  
}

void loop() {
}
