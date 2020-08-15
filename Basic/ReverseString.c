//String Reverse
#include"stdio.h"
#include"string.h"
int main()
{
char str1[10];
int Size,Loop;
printf("Enter the  string : ");
scanf("%s",str1);
Size = strlen(str1);
for(Loop=Size-1;Loop>=0;Loop--)
{
    printf("%c",str1[Loop]);
}
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM