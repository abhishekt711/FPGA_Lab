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

bool OR(bool A, bool B)
{
   return A || B;
}
bool NOR(bool A, bool B)
{
   return NOT(OR(A,B));
}

int main()
{
   bool A = true, B = false, C = false;	
   bool result;
   result = OR(AND(A,C),NOR(A,B));
   result ? printf("1\n") : printf("0\n");
   return 0;
}
