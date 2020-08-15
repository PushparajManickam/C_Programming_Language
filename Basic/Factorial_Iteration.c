//Find the factorial using iteration
#include"stdio.h"
int main()
{
int Number, Loop, Factorial = 1;
printf("Enter the number : ");
scanf("%d",&Number);
for(Loop=1;Loop<=Number;Loop++)
Factorial = Factorial * Loop;
printf("Factorial is %d",Factorial);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM