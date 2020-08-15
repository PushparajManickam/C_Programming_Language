//Matrix Transpose 
#include"stdio.h"
int main()
{
int Loop, Loop1, Rows, Columns;
printf("Enter the FirstNumber of rows : ");
scanf("%d",&Rows);
printf("Enter the FirstNumber of columns : ");
scanf("%d",&Columns);
int FirstNumber[Rows][Columns];
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
        printf("%d ",FirstNumber[Loop1][Loop]);
    }
    printf("\n");
}
printf("BY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM