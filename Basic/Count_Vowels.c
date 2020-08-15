//String Reverse
#include"stdio.h"
#include"string.h"
int main()
{
char str1[50];
int Size, Vowels =0;
printf("Enter the  string : ");
scanf("%s",str1);           //gets(str1);
Size = strlen(str1);
for(int Loop=0;Loop<Size;Loop++)
{
    if((str1[Loop]=='A') ||(str1[Loop]=='E') ||(str1[Loop]=='I') ||(str1[Loop]=='O') ||(str1[Loop]=='U') ||
       (str1[Loop]=='a') ||(str1[Loop]=='e') ||(str1[Loop]=='i') ||(str1[Loop]=='o') ||(str1[Loop]=='u') )
       {
        Vowels++;
       }
}
printf("NUmber of Vowels is %d",Vowels);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM