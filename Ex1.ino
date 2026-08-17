int i,p;
void pattern4(){
  for(i=2;i<=9;i++){
    digitalWrite(i,HIGH);
    digitalWrite((i+1),HIGH);
    delay(500);
  digitalWrite(i,LOW);
    digitalWrite((i+1),LOW);
    delay(500);
}

void loop() {
  if(digitalRead(10)==LOW){
    digitalWrite(2,HIGH);
    delay(500);
    p++;
    if(p==5){
      p=1;
    }
  }
  if(p==1){
    pattern1();
  }
  if(p==2){
    pattern2();
  }
  if(p==3){
    pattern3();
  }
  if(p==4){
    pattern4();
  }
}
void pattern1(){
  for(i=2;i<=9;i++){
    digitalWrite(i,HIGH);
  }
  delay(500);
  
}
void pattern2(){
  for(i=2;i<=9;i++){
    
    digitalWrite(i,LOW);
  }
  delay(500);
}
void pattern3(){
  for(i=2;i<=9;i+=3){
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
  }
}
void pattern4(){
  for(i=2;i<=9;i++){
    digitalWrite(i,HIGH);
    digitalWrite((i+1),HIGH);
    delay(500);
  digitalWrite(i,LOW);
    digitalWrite((i+1),LOW);
    delay(500);
}
}
