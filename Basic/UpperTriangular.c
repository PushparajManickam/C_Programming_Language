// Adding the upper area of triangular 
#include"stdio.h"
int main()
{
int Loop, Loop1, Rows, Columns, Sum = 0;
printf("Enter the number of rows : ");
scanf("%d",&Rows);
printf("Enter the number of columns : ");
scanf("%d",&Columns);
int Number[Rows][Columns];
for(Loop=0;Loop<Rows;Loop++)
{
    for(Loop1=0;Loop1<Columns;Loop1++)
    {
        printf("Enter the number of [%d][%d] : ",Loop,Loop1);
        scanf("%d",&Number[Loop][Loop1]);
    }
}
for(Loop=0;Loop<Rows;Loop++)
{
    for(Loop1=0;Loop1<Columns;Loop1++)
    {
        if(Loop<=Loop1)
        Sum = Sum + Number[Loop][Loop1];
    }
}
printf("The Sum of Upper Triangular Value : %d",Sum);
printf("\nBY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM