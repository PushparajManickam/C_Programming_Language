#include"stdio.h"
int main()
{
int Number, Limit = 1, Loop, Condition;
static int FirstNumber=2;
printf("Enter the number : ");
scanf("%d",&Number);
printf("There are numbers : \n");
while(Limit<=Number)
{
Condition=0;
for(Loop=2;Loop<=FirstNumber;Loop++)
{
    if(FirstNumber%Loop == 0)
    {
        Condition++;
    }
}
if(Condition == 1)
{
    printf("%d ",FirstNumber);
    Limit++;
}
FirstNumber++;
}
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM