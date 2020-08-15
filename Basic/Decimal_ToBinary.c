#include"stdio.h"
int main()
{
int Number, Loop, Loop1, arr[32];
printf("Enter the number : ");
scanf("%d",&Number);
printf("DECIMAL NUMBER TO BINARY ");
for(Loop=0;Number>0;Loop++)
{
    arr[Loop]   = Number%2;     //convert to binary. so,  modulo by 2.
    Number      = Number/2;
}
for(Loop1=Loop-1;Loop1>=0;Loop1--)
{
    printf("%d",arr[Loop1]);
}
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM