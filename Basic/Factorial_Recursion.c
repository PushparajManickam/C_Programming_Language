//Find the factorial using recursion
#include"stdio.h"
int Factorial(int);
int main()
{
int Number, Fact;
printf("Enter the number : ");
scanf("%d",&Number);
Fact = Factorial(Number);
printf("Factorial is %d",Fact);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
int Factorial(int n)
{
    if(n<=0)
    return 1;
    return n * Factorial(n-1);
}
//BY PUSHPARAJ MANICKAM