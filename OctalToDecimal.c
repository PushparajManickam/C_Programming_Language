//Octal(2003)---->Decimal(1027)
#include<stdio.h>
int main()
{
    int Octal, lastDigit, Decimal=0, Base=1;
    printf("Enter the octal number : ");
    scanf("%d",&Octal);
    while(Octal!=0)
    {
        lastDigit   = Octal%10;
        Decimal     = Decimal + (lastDigit * Base);         
        Octal       = Octal/10;
        Base        = Base * 8;
    }
    printf("Conversion of Octal to Decimal is %d\n",Decimal);
}