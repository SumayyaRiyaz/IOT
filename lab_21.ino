// C++ code
//
void setup()
{
  pinMode(9, INPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int temp=digitalRead(9);
  Serial.println("intensity=");
  Serial.println(temp);
  if(temp==HIGH){
    digitalWrite(8,HIGH);}
  else{
    digitalWrite(8, LOW);}
}
  