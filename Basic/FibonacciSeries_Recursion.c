//Find the Fibonacci using recursion
#include"stdio.h"
int Fibonacci(int);
int main()
{
int Number, Fibo;
printf("Enter the number : ");
scanf("%d",&Number);
Fibo = Fibonacci(Number);
printf("Fibonacci Series is %d",Fibo);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
int Fibonacci(int n)
{
    if(n<=1)
    return 1;
    return Fibonacci(n-2) + Fibonacci(n-1);
}
//BY PUSHPARAJ MANICKAM