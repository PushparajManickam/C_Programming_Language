#include"stdio.h"
int main()
{
int First_number, Second_number, Temporary_number;
printf("Enter the first number\t: ");
scanf("%d",&First_number);
printf("Enter the second number\t: ");
scanf("%d",&Second_number);
printf("BEFORE SWAPPING \t:\nFirst Number is %d and Second Number is %d\n",First_number,Second_number);
Temporary_number = First_number;
First_number = Second_number;
Second_number= Temporary_number;
printf("AFTER SWAPPING\t\t:\nFirst Number is %d and Second Number is %d",First_number,Second_number);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM