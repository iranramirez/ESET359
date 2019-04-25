
int Left_pin = 5;
int Right_pin = 3;
char data = 0;
int data1; 
int check1, check2; 

void setup( )                    // Initialization settings; then only runs the function.

{
Serial.begin(9600);             //baudrate is setup to 9600
pinMode(Left_pin, OUTPUT);
pinMode(Right_pin, OUTPUT);
}

void loop( )                    //The function operates repeatedly until the poweroff.
{

while(Serial.available( ))

{

data = Serial.read();   // Check whether data is available or not. If data is available, then data is read.          
Serial.write(data);
if (data == '1')
{ check1 = HIGH;
  check2 = LOW;
}
else if (data == '2')
{ check1 = LOW;
  check2 = HIGH;
}
else if (data == '3')
{ check1 = HIGH;
  check2 = HIGH;
}
else
{ check1 = LOW;
  check2 = LOW;
}

digitalWrite(Left_pin,check1);
digitalWrite(Right_pin,check2);
delay(500);
digitalWrite(Left_pin,LOW);
digitalWrite(Right_pin,LOW);
delay(1000);

}
}
