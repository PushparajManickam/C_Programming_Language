//Find the Fibonacci using recursion
#include"stdio.h"
int Fibonacci(int);
int main()
{
int Loop, Number, Fibo, FirstNumber = 0, SecondNumber = 1;
printf("Enter the number : ");
scanf("%d",&Number);
for(Loop =2; Loop<=Number;Loop++)
{
    Fibo            = FirstNumber + SecondNumber;
    FirstNumber     = SecondNumber;
    SecondNumber    = Fibo;
}
printf("Fibonacci Series is %d",Fibo);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM