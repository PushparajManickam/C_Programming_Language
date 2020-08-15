#include"stdio.h"
int main()
{
int Number, Temp, Remainder, Sum = 0;
printf("Enter the number : ");
scanf("%d",&Number);
Temp = Number;
while(Number>0)
{
    Remainder   = Number % 10;
    Sum         = Sum + (Remainder * Remainder * Remainder);
    Number      = Number / 10;
}
if(Temp == Sum)
printf("%d IS ARMSTRONG",Temp);
else
printf("%d IS NOT ARMSTRONG",Temp);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM