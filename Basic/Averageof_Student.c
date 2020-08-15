#include"stdio.h"
int main()
{
int Limit, Loop, Mark, Total =0;
float  Average;
printf("Enter number of subject : ");
scanf("%d",&Limit);
for(Loop = 1;Loop<=Limit;Loop++)
{
printf("Enter the Mark %d\t: ",Loop);
scanf("%d",&Mark);
Total = Total + Mark;
}
Average = Total / Limit;
printf("Total Marks\t: %d\n",Total);
printf("Total Marks\t: %.2f",Average);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM