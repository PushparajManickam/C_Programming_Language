//String Concatenate
#include"stdio.h"
#include"string.h"
int main()
{
int Limit;
printf("Enter the limit : ");
scanf("%d",&Limit);
char str1[Limit],str2[Limit];
printf("Enter the first string : ");
scanf("%s",str1);   //gets(str1)
printf("Enter the second string : ");
scanf("%s",str2);   //gets(str2)
strcat(str1,str2);                  //str1 = str1 + str2
printf("String Concatenate is %s",str1);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM
