//Decimal(1027)--->Octal(2003)
#include<stdio.h>
int main()
{
    int Octal=0, lastDigit, Decimal, Position=1;
    printf("Enter the decimal number : ");
    scanf("%d",&Decimal);
    while(Decimal!=0)
    {
        lastDigit   = Decimal%8;
        Octal       = Octal + (lastDigit*Position);      //position placed One's, Ten's,....
        Decimal     = Decimal/8;
        Position    = Position*10;
    }
    printf("Conversion of Decimal to octal is %d\n",Octal);
}