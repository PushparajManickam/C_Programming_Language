#include"stdio.h"
#include"math.h"
int main()
{
long BinaryNumber,Remainder;
int Decimal=0, Loop=0;
printf("Enter the binary number : ");
scanf("%ld",&BinaryNumber);
while(BinaryNumber!=0)
{
Remainder   = BinaryNumber % 10;                //101
Decimal     = Decimal + (Remainder*pow(2,Loop)); // 1*2^0=1, 0*2^1=0, 1*2^2=4
BinaryNumber= BinaryNumber % 10;
Loop++;
}
printf("Decimal : %d",Decimal);                //
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM