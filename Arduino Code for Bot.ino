
int IN1=5,IN2=6,IN3=7,IN4=8;
int pwM1,pwM2;
int M1=10,M2=11;
int pwM_base_L=150;
int pwM_base_R=130;

void setup() {
  // put your setup code here, to run once:

pinMode (IN1,OUTPUT);
pinMode (IN2,OUTPUT);
pinMode (IN3,OUTPUT);
pinMode (IN4,OUTPUT);
pinMode (M1,OUTPUT);
pinMode (M2,OUTPUT);
Serial.begin(9600);
}

void loop() {

  // put your main code here, to run repeatedly:
if(Serial.available())
{
  char k=Serial.read();
Serial.println(k);
switch(k)
{
case 'F':
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
pwM1=pwM_base_L;
pwM2=pwM_base_R;
analogWrite(M1,pwM1);
analogWrite(M2,pwM2);

break;

case'B':
digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH);
pwM1=pwM_base_L;
pwM2=pwM_base_R;
analogWrite(M1,pwM1);
analogWrite(M2,pwM2);

break;

case'S':
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
pwM1=0;
pwM2=0;
analogWrite(M1,pwM1);
analogWrite(M2,pwM2);

break;

case 'L':
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);

analogWrite(M1,pwM1);
analogWrite(M2,pwM2);
pwM1=pwM_base_L-60;
pwM2=pwM_base_R+80;
break;

case 'R':
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
pwM1=pwM_base_L+80;
pwM2=pwM_base_R-60;
analogWrite(M1,pwM1);
analogWrite(M2,pwM2);

break;
}

  
  
}
}
