//Matrix Multiplication 
#include"stdio.h"
int main()
{
int Loop, Loop1, Loop2, Rows, Columns;
printf("Enter the FirstNumber of rows : ");
scanf("%d",&Rows);
printf("Enter the FirstNumber of columns : ");
scanf("%d",&Columns);
int FirstNumber[Rows][Columns],SecondNumber[Rows][Columns],SumNumber[Rows][Columns];
for(Loop=0;Loop<Rows;Loop++)
{
    for(Loop1=0;Loop1<Columns;Loop1++)
    {
        printf("Enter the FirstNumber of [%d][%d] : ",Loop,Loop1);
        scanf("%d",&FirstNumber[Loop][Loop1]);
    }
}
for(Loop=0;Loop<Rows;Loop++)
{
    for(Loop1=0;Loop1<Columns;Loop1++)
    {
        printf("Enter the SecondNumber of [%d][%d] : ",Loop,Loop1);
        scanf("%d",&SecondNumber[Loop][Loop1]);
    }
}
for(Loop=0;Loop<Rows;Loop++)
{
    for(Loop1=0;Loop1<Columns;Loop1++)
    {
        SumNumber[Loop][Loop1] = 0;
        for(Loop2=0;Loop2<Columns;Loop2++)
        {
            SumNumber[Loop][Loop1] = SumNumber[Loop][Loop1] + (FirstNumber[Loop][Loop2] * SecondNumber[Loop2][Loop]);
        }
    }
}
for(Loop=0;Loop<Rows;Loop++)
{
    for(Loop1=0;Loop1<Columns;Loop1++)
    {
        printf("Enter the SumNumber of [%d][%d] : %d\n",Loop,Loop1,SumNumber[Loop][Loop1]);
    }
}

printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM