void setup() {
  pinMode(11, OUTPUT);
}


int tones[4] = {100,400,600,300};


void loop() {
 
  for( int i = 0; i < 4 ; i++){
    digitalWrite(tones[i] , HIGH);
  }

}
