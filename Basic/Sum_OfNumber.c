#include"stdio.h"
int main()
{
int Number, Remainder, Sum = 0;
printf("Enter the number : ");
scanf("%d",&Number);
while(Number>0)
{
    Remainder   = Number % 10;
    Sum         = Sum + Remainder;
    Number      = Number / 10;
}
printf("Sum of digit is %d",Sum);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM