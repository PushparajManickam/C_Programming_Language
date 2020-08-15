//PRINT SEPERATELY POSITIVE AND NEGATIVE!!!
#include<stdio.h>
int main()
{
    int Loop,Limit;
    printf("Enter the Limit : ");
    scanf("%d",&Limit);
    int Number[Limit];
    for(Loop=0;Loop<Limit;Loop++)
    {
        printf("Enter number of %d  : ",Loop+1);
        scanf("%d",&Number[Loop]);
    }
    printf("There Are Negative Number...\n");
    for(Loop=0;Loop<Limit;Loop++)
    {
        if(Number[Loop]<0)
        {
            printf("%d\t",Number[Loop]);
        }
    }
    printf("\nZero's\n");
    for(Loop=0;Loop<Limit;Loop++)
    {
        if(Number[Loop]==0)
        printf("%d\t",Number[Loop]);
    }

    printf("\nThere Are Positive Number...\n");
    for(Loop=0;Loop<Limit;Loop++)
    {
        if(Number[Loop]>0)
        {
            printf("%d\t",Number[Loop]);
        }
    }
    printf("\nPUSHPARAJ MANICKAM!!!\n");
    return 0;
}
//PUSHPARAJ MANICKAM!!!