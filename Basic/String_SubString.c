//String Comparation
#include"stdio.h"
#include"string.h"
int main()
{
int Limit;
printf("Enter the limit : ");
scanf("%d",&Limit);
char str1[Limit],str2[Limit];
char *str3;
printf("Enter the first string : ");
scanf("%s",str1);           //gets(str1);
printf("Enter the second string : ");
scanf("%s",str2);           //gets(str2)
str3 = strstr(str1,str2);
printf("String : %s",str3);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM