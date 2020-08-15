//String Comparation
#include"stdio.h"
#include"string.h"
int main()
{
char str1[50],ch;
char *str2;
printf("Enter the character : ");
scanf("%c",&ch);
printf("Enter the string : ");
scanf("%s",str1);
str2 = strchr(str1,ch);
printf("Character occured first time after the string is %s",str2);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM