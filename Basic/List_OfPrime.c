#include"stdio.h"
int main()
{
int Number, Limit, Loop, Condition;
printf("Enter the number : ");
scanf("%d",&Number);
printf("There are numbers : \n");
for(Limit=2;Limit<=Number;Limit++)
{
Condition=0;
for(Loop=2;Loop<=Number;Loop++)
{
    if(Limit%Loop == 0)
    {
        Condition++;
    }
}
if(Condition == 1)
{
    printf("%d ",Limit);
}
}
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM