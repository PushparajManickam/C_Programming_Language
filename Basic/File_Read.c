//File Handling
#include"stdio.h"
int main()
{
int Current, Loop=0, Loop1;
char arr[50];
FILE *fptr;
fptr = fopen("/home/pushparaj/Documents/Input.txt","r");
if(fptr)
printf("File was found\n");
else
printf("File is not present\n");
while((Current = fgetc(fptr))!=EOF)
{
arr[Loop] = Current;
Loop++;
}
for(Loop1=0;Loop1<Loop;Loop1++)
printf("%c",arr[Loop1]);
fclose(fptr);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM