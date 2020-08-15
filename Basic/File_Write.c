//Copy One text file to another text file
#include"stdio.h"
int main()
{
int Current, Temp;
FILE *fptr1, *fptr2;
fptr1 = fopen("/home/pushparaj/Documents/Input.txt","r");
fptr2 = fopen("/home/pushparaj/Documents/Output.txt","w");
if(fptr1)
printf("File was found\n");
else
printf("File is not present\n");
while((Current = fgetc(fptr1))!=EOF)
{
fputc(Current,fptr2);
}
fclose(fptr1);
fclose(fptr2);
FILE *fptr = fopen("/home/pushparaj/Documents/Output.txt","r");
while((Temp = fgetc(fptr))!=EOF)
{
    printf("%c",Temp);
}
fclose(fptr);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM