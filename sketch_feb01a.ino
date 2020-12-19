 #include<stdio.h>
#include<stdlib.h>
#include<time.h>
int n,a[3],v=0,count=0;
int flag=0;
void setup() {
  
    srand(time(0));
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    
    pinMode(13,OUTPUT);
    pinMode(A0,INPUT);
    pinMode(A1,INPUT);
    pinMode(A2,INPUT);
    pinMode(A3,INPUT);
    pinMode(A4,INPUT);
    pinMode(A5,INPUT);
    pinMode(A6,INPUT);
    pinMode(A7,INPUT);
    pinMode(A8,INPUT);
    pinMode(A9,INPUT);
    Serial.begin(9600);
    // for buzzer
    

}
void loop() {
  int val_0= analogRead(A0);
  int val_1= analogRead(A1);
  int val_2= analogRead(A2);
  int val_3= analogRead(A3);
  int val_4= analogRead(A4);
  int val_5= analogRead(A5);
  int val_6= analogRead(A6);
  int val_7= analogRead(A7);
  int val_8= analogRead(A8);
  int val_9= analogRead(A9);
  
if(flag==10)
  {digitalWrite(a[v],LOW);   
    v=0;
   a[v]= rand() % 10 +2;
 
  digitalWrite(a[v],HIGH);
  flag=0;}
  
 
 
   
  
  Serial.print("a0  " );
  Serial.println(val_0);
   
  Serial.print("a1  " );
  Serial.println(val_1);
  
  Serial.print("a2  " );
  Serial.println(val_2);
  
  Serial.print("a3  " );
  Serial.println(val_3);
  
  Serial.print("a4  " );
  Serial.println(val_4);
  
  Serial.print("a5  " );
  Serial.println(val_5);
  
  Serial.print("a6  " );
  Serial.println(val_6);
  
  Serial.print("a7  " );
  Serial.println(val_7);
  
  Serial.print("a8  " );
  Serial.println(val_8);
  
  Serial.print("a9  " );
  Serial.println(val_9);

  
  
  if(val_0>=600 &&a[v]==2)
   {digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW)
    ;
    Serial.println(count+=1);}
    
    if(val_1>=550&&a[v]==3)
   {digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    Serial.println(count+=1);}
    
    if(val_2>= 610&&a[v]==4)
   {digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
   }
    
    if(val_6>=490&&a[v]==5)
   {digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    }
    
    if(val_4>= 315&&a[v]==6)
   {digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    Serial.println(count+=1);}
    
    if(val_5>=500 &&a[v]==7)
   {digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    Serial.println(count+=1);}
    
    if(val_3>= 600&&a[v]==8)
   {digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    Serial.println(count+=1);}
    
    if(val_7<=120&&a[v]==9)
   {digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    Serial.println(count+=1);}
    
    if(val_7<=150 &&a[v]==10)
   {digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    Serial.println(count+=1);}

    if(val_9<=220 &&a[v]==11)
   {digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    Serial.println(count+=1);}
    
    
    
    
    flag=flag+1;
    
    
    
      

}
