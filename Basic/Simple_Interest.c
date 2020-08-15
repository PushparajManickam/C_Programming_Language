#include"stdio.h"
int main()
{
float Simple_Interest, Principle, Rate, Time, Total_Amount;
printf("Enter the Principle\t: ");
scanf("%f",&Principle);
printf("Enter the Rate\t\t: ");
scanf("%f",&Rate);
printf("Enter the Time\t\t: ");
scanf("%f",&Time);                                  //Number of years!!!
Simple_Interest = (Principle  Rate * Time) / 100;
Total_Amount = Principle + Simple_Interest;
printf("Simple Interest\t: %f",Total_Amount);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM