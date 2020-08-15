#include<stdio.h>
int main()
{
    int Loop,Limit,Temp,i,j;
    printf("Enter the testcase : ");
    scanf("%d",&Limit);
    int Number[Limit];
    for(Loop=0;Loop<Limit;Loop++)
    {
        printf("Enter the number of %d : ",Loop+1);
        scanf("%d",&Number[Loop]);
    }
    for(i=0;i<Limit-1;i++)
    {
    for(j=i+1;j<Limit;j++)
    {
        if(Number[i]<Number[j])
        {
                Temp        = Number[i];
                Number[i]   = Number[j] ;
                Number[j] = Temp;
        }
    }
    }
    printf("Descending Order :\t");
    for(Loop=0;Loop<Limit;Loop++)
    {
        printf("%d\t",Number[Loop]);
    }
    printf("\nPUSHPARAJ MANICKAM!!!\n");
    return 0;
}
//PUSHPARAJ MANICKAM!!!