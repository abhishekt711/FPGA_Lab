#include <Arduino.h>
int a, b, c, NAND_op;

int NAND(int a1, int a2){
	return !(a1 && a2);
}
void setup() {
	pinMode(LED_BUILTIN,OUTPUT);

  // put your setup code here, to run once:
}

void loop() {
//  a=1;
//  b=0;
//  c=1;
for (a=0;a<2;a++)
{
	for(b=0;b<2;b++)
	{
		for(c=0;c<2;c++)
		{
  NAND_op=NAND(NAND(NAND(a,a),NAND(b,b)),NAND(a,c));
  if(NAND_op==1)
  {
	  digitalWrite(LED_BUILTIN,HIGH);
	  delay(500);
  }
  else
  {
	  digitalWrite(LED_BUILTIN,LOW);
	  delay(500);
  }
		}
	}
}

  // put your main code here, to run repeatedly:
}
