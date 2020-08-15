//String
#include"stdio.h"
#include"string.h"
int main()
{
int Limit,Position;
printf("Enter the limit : ");
scanf("%d",&Limit);
char str1[Limit],str2[Limit];
printf("Enter the first string : ");
scanf("%s",str1);           //gets(str1);
printf("Enter the second string : ");
scanf("%s",str2);           //gets(str2)
printf("Enter the position : ");
scanf("%d",&Position);
strncat(str1,str2,Position);                  //print string 1, then string 2 is print until position
printf("String Conatenate is %s",str1);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM