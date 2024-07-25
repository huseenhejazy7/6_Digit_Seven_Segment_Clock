int HH=11;
int MM=30;
int ss=06;

int a,b,c,d,e,f;
int i=3;

long interval = 1000;
long interval1 = 500;

int segA = 2; // Display pin A
int segB = 3; // Display pin B
int segC = 4; // Display pin C
int segD = 5; // Display pin D
int segE = 6; // Display pin E
int segF = 7; // Display pin F
int segG = 8; // Display pin G

int digit1=9;
int digit2=10;
int digit3=11;
int digit4=12;
int digit5=14; //A0
int digit6=15; //A1

int dot=13;

void setup() {
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT); 
  pinMode(segE, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);

  pinMode(digit1, OUTPUT);
  pinMode(digit2, OUTPUT);
  pinMode(digit3, OUTPUT); 
  pinMode(digit4, OUTPUT);
  pinMode(digit5, OUTPUT);
  pinMode(digit6, OUTPUT);
  
  pinMode(dot, OUTPUT);

 Serial.begin(9600);
 Serial.println("Multiplexing 6 Digit Seven Segment Clock");
  
}

void loop() {
  a=int(HH/10);
  b=int(HH/10); 
  c=int(MM/10);
  d=int(MM/10);
  e=int(SS/10);
  f=int(SS/10);

   lightZNumber(a);
 digitalWrite(digit1,LOW);
 digitalWrite(digit2,HIGH);
 digitalWrite(digit3,HIGH);
 digitalWrite(digit4,HIGH); 
 digitalWrite(digit5,HIGH);
 digitalWrite(digit6,HIGH);
 delay(i);

    lightZNumber(b);
 digitalWrite(digit1,HIGH);
 digitalWrite(digit2,LOW);
 digitalWrite(digit3,HIGH);
 digitalWrite(digit4,HIGH); 
 digitalWrite(digit5,HIGH);
 digitalWrite(digit6,HIGH);
 delay(i);

    lightZNumber(c);
 digitalWrite(digit1,HIGH);
 digitalWrite(digit2,HIGH);
 digitalWrite(digit3,LOW);
 digitalWrite(digit4,HIGH); 
 digitalWrite(digit5,HIGH);
 digitalWrite(digit6,HIGH);
 delay(i);

    lightZNumber(d);
 digitalWrite(digit1,HIGH);
 digitalWrite(digit2,HIGH);
 digitalWrite(digit3,HIGH);
 digitalWrite(digit4,LOW); 
 digitalWrite(digit5,HIGH);
 digitalWrite(digit6,HIGH);
 delay(i);
  
     lightZNumber(e);
 digitalWrite(digit1,HIGH);
 digitalWrite(digit2,HIGH);
 digitalWrite(digit3,HIGH);
 digitalWrite(digit4,HIGH); 
 digitalWrite(digit5,LOW);
 digitalWrite(digit6,HIGH);
 delay(i);

     lightZNumber(f);
 digitalWrite(digit1,HIGH);
 digitalWrite(digit2,HIGH);
 digitalWrite(digit3,HIGH);
 digitalWrite(digit4,HIGH); 
 digitalWrite(digit5,HIGH);
 digitalWrite(digit6,LOW);
 delay(i); 
}

void lightZNumber(int numberToDisplay){

#define SEGMENT_ON HIGH
#define SEGMENT_OFF LOW

switch (numberToDisplay){

case 0:;
 digitalWrite(segA, SEGMENT_ON); 
 digitalWrite (segB, SEGMENT_ON);
 digitalWrite(segC, SEGMENT_ON);
 digitalWrite(segD, SEGMENT_ON); 
 digitalWrite(segE, SEGMENT_ON);
 digitalWrite(segF, SEGMENT_ON);
 digitalWrite(segG, SEGMENT_OFF);
 break;

case 1:;
 digitalWrite(segA, SEGMENT_OFF);  
 digitalWrite(segB, SEGMENT_ON);
 digitalWrite(segC, SEGMENT_ON);
 digitalWrite(segD, SEGMENT_OFF); 
 digitalWrite(segE, SEGMENT_OFF);
 digitalWrite(segF, SEGMENT_OFF);
 digitalWrite(segG, SEGMENT_OFF);
 break;

case 2:;
 digitalWrite(segA, SEGMENT_ON); 
 digitalWrite(segB, SEGMENT_ON);
 digitalWrite(segC, SEGMENT_OFF);
 digitalWrite(segD, SEGMENT_ON); 
 digitalWrite(segE, SEGMENT_ON);
 digitalWrite(segF, SEGMENT_OFF);
 digitalWrite(segG, SEGMENT_ON);
 break;

case 3:;
 digitalWrite(segA, SEGMENT_ON);  
 digitalWrite(segB, SEGMENT_ON);
 digitalWrite(segC, SEGMENT_ON);
 digitalWrite(segD, SEGMENT_ON);
 digitalWrite(segE, SEGMENT_OFF);
 digitalWrite(segF, SEGMENT_OFF);
 digitalWrite(segG, SEGMENT_ON);
 break;

case 4:;
 digitalWrite(segA, SEGMENT_OFF);  
 digitalWrite(segB, SEGMENT_ON);
 digitalWrite(segC, SEGMENT_ON);
 digitalWrite(segD, SEGMENT_OFF);
 digitalWrite(segE, SEGMENT_OFF);
 digitalWrite(segF, SEGMENT_ON);
 digitalWrite(segG, SEGMENT_ON);
 break;

case 5:;
 digitalWrite(segA, SEGMENT_ON);  
 digitalWrite(segB, SEGMENT_OFF);
 digitalWrite(segC, SEGMENT_ON);
 digitalWrite(segD, SEGMENT_ON);
 digitalWrite(segE, SEGMENT_OFF);
 digitalWrite(segF, SEGMENT_ON);
 digitalWrite(segG, SEGMENT_ON);
 break;

case 6:;
 digitalWrite(segA, SEGMENT_ON);  
 digitalWrite(segB, SEGMENT_OFF);
 digitalWrite(segC, SEGMENT_ON);
 digitalWrite(segD, SEGMENT_ON); 
 digitalWrite(segE, SEGMENT_ON);
 digitalWrite(segF, SEGMENT_ON);
 digitalWrite(segG, SEGMENT_ON);
 break;

case 7:;
 digitalWrite(segA, SEGMENT_ON);  
 digitalWrite(segB, SEGMENT_ON);
 digitalWrite(segC, SEGMENT_ON);
 digitalWrite(segD, SEGMENT_OFF); 
 digitalWrite(segE, SEGMENT_OFF);
 digitalWrite(segF, SEGMENT_OFF);
 digitalWrite(segG, SEGMENT_OFF);
 break;

case 8:;
 digitalWrite(segA, SEGMENT_ON);  
 digitalWrite(segB, SEGMENT_ON);
 digitalWrite(segC, SEGMENT_ON);
 digitalWrite(segD, SEGMENT_ON); 
 digitalWrite(segE, SEGMENT_ON);
 digitalWrite(segF, SEGMENT_ON);
 digitalWrite(segG, SEGMENT_ON);
 break;

case 9:;
 digitalWrite(segA, SEGMENT_ON);  
 digitalWrite(segB, SEGMENT_ON);
 digitalWrite(segC, SEGMENT_ON);
 digitalWrite(segD, SEGMENT_ON); 
 digitalWrite(segE, SEGMENT_OFF);
 digitalWrite(segF, SEGMENT_ON);
 digitalWrite(segG, SEGMENT_ON);
 break;
  
} 
} 
