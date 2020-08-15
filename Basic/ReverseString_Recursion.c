//String Reverse
#include"stdio.h"
#include"string.h"
void Reverse(char*);
int main()
{
char str1[10];
int Size,Loop;
printf("Enter the  string : ");
scanf("%s",str1);
Reverse(str1);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
void Reverse(char *s)
{
if(*s)
{
Reverse(s+1);       //Passing Only one Character from String
printf("%c",*s);
}
}
//BY PUSHPARAJ MANICKAM