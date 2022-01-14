#include<stdio.h>
#include<stdbool.h>

bool NOT(bool A)
{
   return !A;
}

bool AND(bool A, bool B)
{
   return A && B;
}
bool NAND(bool A, bool B)
{
   return NOT(AND(A,B));
}

int main()
{
   bool A = true, B = false, C = true;	
   bool result;
   result=NAND(NAND(NAND(A,A),NAND(B,B)),NAND(A,C));
   result ? printf("1\n") : printf("0\n");
   return 0;
}