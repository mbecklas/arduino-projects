

void setup(){
  Serial.begin(9600);

}
void loop()
{
  int var = analogRead(A0);
  Serial.println(var);
  if(var < 20){
    digitalWrite(2,HIGH);
  }else{
    digitalWrite(2,LOW);
  }
  
  
  
  
}
