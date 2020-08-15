#include<stdio.h>
int main()
{
    int Loop, Loop1, Limit;
    printf("Enter the testcase : ");
    scanf("%d",&Limit);
    int Number[Limit][Limit];
    for(Loop=0;Loop<Limit;Loop++)
    {
        for(Loop1=0;Loop1<Limit;Loop1++)
        {
        printf("Enter the number of [%d][%d]\t: ",Loop,Loop1);
        scanf("%d",&Number[Loop][Loop1]);
        }
    }
    for(Loop=0;Loop<Limit;Loop++)
    {
        for(Loop1=0;Loop1<=Limit;Loop1++)
        {
        if(Loop==Loop1)
        printf("%d\t",Number[Loop][Loop1]);
        else
        printf("  ");
        }
        printf("\n");
    }
    printf("PUSHPARAJ MANICKAM!!!\n");
    return 0;
}
//PUSHPARAJ MANICKAM!!!