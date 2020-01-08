#include <SoftwareSerial.h>

//void sendData(String cmd);

SoftwareSerial mySerial(2, 3); // RX, TX
int i;
int mo=8;
int re=9;
int bl=10;
int gre=11;
String data;
String g;

void setup()
 {
 // Open serial communications and wait for port to open:
 Serial.begin(9600);
 mySerial.begin(9600);
 pinMode(mo,OUTPUT);
 pinMode(re,OUTPUT);
 pinMode(bl,OUTPUT);
 pinMode(gre,OUTPUT);
 //delay(1000);
 //sendData("AT\r\n");
 }//setup
 
 void loop() // run over and over
 {
 while (mySerial.available()>0 ){
   char ch=mySerial.read();
   data.concat(ch);
   if(ch=='\n')
   {
     Serial.println(data);
     if(data.startsWith("+IPD"))
     {
       g=data.substring(9,11);
       //Serial.println(g);
       if(g.equals("mo"))
       {
         digitalWrite(mo,HIGH);
         Serial.println("motor on");
       }
       if(g.equals("mf"))
       {
         digitalWrite(mo,LOW);
         Serial.println("motor off");
       }
       if(g.equals("ro"))
       {
         digitalWrite(re,HIGH);
         Serial.println("red on");
       }
       if(g.equals("rf"))
       {
         digitalWrite(re,LOW);
         Serial.println("red off");
       }
       if(g.equals("bo"))
       {
         digitalWrite(bl,HIGH);
         Serial.println("blue on");
       }
       if(g.equals("bf"))
       {
         digitalWrite(bl,LOW);
         Serial.println("blue off");
       }
       if(g.equals("go"))
       {
         digitalWrite(gre,HIGH);
         Serial.println("green on");
       }
       if(g.equals("gf"))
       {
         digitalWrite(gre,LOW);
         Serial.println("green off");
       }
     }
     data="";
   }
   //Serial.write(mySerial.read());
 }
 while (Serial.available()>0 ){
   mySerial.write(Serial.read());
delay(100);
 }
 }//loop
 
void sendData(String cmd)
 {
   String resp="";
   mySerial.print(cmd);
   Serial.println(cmd);
   Serial.println("sent");
   delay(100);
   if(mySerial.available()>0){
     while(mySerial.available()){
     char ch=mySerial.read();
     resp+=ch;
     if(ch=='\n')
   Serial.println(resp);
   }
   }
   else
   Serial.println("nothing");
 }//sendData
     
   
   
