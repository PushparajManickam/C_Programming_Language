#include"stdio.h"
#include"string.h"
#include"ctype.h"
int main()
{
char str1[50];
int Loop,Digit=0,Alphabet=0,Symbol=0,Size;
printf("Enter the  string : ");
scanf("%s",str1);           //gets(str1);
Size = strlen(str1);
for(Loop=0;Loop<Size;Loop++)
{
if(isalpha(str1[Loop]))
{
Alphabet++;
}
else if(isdigit(str1[Loop]))
{
    Digit++;
}
else
{
    Symbol++;
}
}
printf("Alphabet is %d",Alphabet);
printf("\nDigit is %d",Digit);
printf("\nSymbol is %d",Symbol);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM