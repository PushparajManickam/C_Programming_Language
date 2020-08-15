//String Comparation
#include"stdio.h"
#include"string.h"
int main()
{
int Limit;
printf("Enter the limit : ");
scanf("%d",&Limit);
char str1[Limit],str2[Limit];
printf("Enter the first string : ");
scanf("%s",str1);           //gets(str1);
printf("Enter the second string : ");
scanf("%s",str2);           //gets(str2)
if(strcmp(str1,str2)>0)
{
    printf("%s is greater than %s",str1,str2);
}
else if(strcmp(str1,str2)<0)
{
    printf("%s is less than %s",str1,str2);
}
else
{
    printf("%s is equal than %s",str1,str2);
}
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM