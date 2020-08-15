#include"stdio.h"
int main()
{
int Number, Loop, Condition = 1;
printf("Enter the number : ");
scanf("%d",&Number);
    for(Loop=2;Loop<=Number/2;Loop++)
    {
        if(Number%Loop==0)
        {
            Condition = 0;
        }
    }
    if(Condition == 1)
    {
        printf("%d IS  PRIME NUMBER",Number);
    }
    else
    {
        printf("%d IS NOT PRIME NUMBER",Number);
    }
    
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM