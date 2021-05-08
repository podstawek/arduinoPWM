int speakerPin = 26;     // speaker on digital pin 26
int coarseTune, fineTune, duty, coarseDuty, fineDuty;

void setup() {
  pinMode (speakerPin, OUTPUT);
  pinMode (A4, INPUT);   //     coarse potentiometer on analog pin A4
  pinMode (A5, INPUT);   //       fine potentiometer on analog pin A5
  pinMode (A6, INPUT);   // duty cycle potentiometer on analog pin A6
}

void loop() {

 coarseTune = map(analogRead(A4), 0, 1023, 1, 100);   // 10
 fineTune   = map(analogRead(A5), 0, 1023, 1, 10000); 
 duty       = map(analogRead(A6), 0, 1023, 1, 20);    
 coarseDuty = coarseTune / duty ;
 fineDuty   = fineTune / duty ;
 
  digitalWrite(speakerPin, HIGH);
  delay(coarseDuty);                
  delayMicroseconds(fineDuty);      
  
  digitalWrite(speakerPin, LOW);
  delay(coarseTune-coarseDuty);
  delayMicroseconds(fineTune-fineDuty);  
 
}
