#include"stdio.h"
int main()
{
int Number, Remainder, Sum = 0;
printf("Enter the number : ");
scanf("%d",&Number);
printf("Reverse   \t : ");
while(Number>0)
{
    Remainder   = Number % 10;
//  Sum         = (Sum * 10) + Remainder;
    printf("%d",Remainder);
    Number      = Number / 10;
}
//printf("%d",Sum);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM