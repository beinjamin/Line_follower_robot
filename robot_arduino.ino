

void setup () {
  
  pinMode(3,  INPUT);
  pinMode(2,  INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  
  
  }
void loop (){
  int G= digitalRead(2);
  int D= digitalRead(3);

  if (G==1 and D==1)
  {
    digitalWrite(13,1);
    digitalWrite(12,0);
    digitalWrite(11,1);
    digitalWrite(10,0);  
    
  }

   if (G==1 and D==0)
  {
    digitalWrite(13,0);
    digitalWrite(12,1);
    digitalWrite(11,1);
    digitalWrite(10,0);  
    
  }
  if (G==0 and D==0)
  {
    digitalWrite(13,0);
    digitalWrite(12,1);
    digitalWrite(11,0);
    digitalWrite(10,1);  
    
  }
  if (G==0 and D==1)
  {
    digitalWrite(13,1);
    digitalWrite(12,0);
    digitalWrite(11,0);
    digitalWrite(10,1);  
    
  }
  
  
}
