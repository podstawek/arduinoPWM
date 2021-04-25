int speakerPin = 26;      // speaker on digital pin 26


float frequencies[] = {146.8, 146.8, 146.8, 174.6, 196, 220, 146.8, 146.8, 246.94, 220, 196, 220, 220, 220, 164.8, 220, 164.8, 174.6, 146.8, 174.6, 220, 164.8, 164.8, 174.6, 220, 261.6, 246.9, 220, 196, 174.6, 174.6, 196, 196, 164.8, 130.8, 440, 440, 493.9, 440, 415.3, 440, 587.3, 493.9, 392, 329.6, 440, 293.6};
float durations[] = {0.3, 0.05, 0.05, 0.2, 0.2, 0.4, 0.2, 0.2, 0.4, 0.2, 0.2, 0.4, 0.4, 0.2, 0.2, 0.2, 0.2, 0.4, 0.2, 0.2, 0.4, 0.2, 0.2, 0.6, 0.2, 0.3, 0.1, 0.2, 0.2, 0.6, 0.2, 0.3, 0.1, 0.2, 0.2, 0.6, 0.3, 0.1, 0.2, 0.2, 0.4, 0.4, 0.2, 0.2, 0.2, 0.2, 0.4};

int musicLength = sizeof(frequencies) / sizeof(frequencies[0]);

float delayInMicroseconds;
int numberOfIterations;
float frequency;
float duration;

void setup() {
  pinMode(speakerPin, OUTPUT);

  
  for (int x=0; x < musicLength; x++) {

    frequency = frequencies[x];
    duration = durations[x];
        
    delayInMicroseconds = 1/frequency*1000000/2;
    numberOfIterations = duration*frequency;
        
    for (int f=0; f < numberOfIterations; f++) {
      digitalWrite(speakerPin, HIGH);
      delayMicroseconds(delayInMicroseconds);
      digitalWrite(speakerPin, LOW);
      delayMicroseconds(delayInMicroseconds);
    }
    
  }
}

void loop() {
}
