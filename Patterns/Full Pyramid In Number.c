#include<stdio.h>
int main()
{
	int Rows,Space,Number,TotalRows,Temp;
	printf("Enter The Limit : ");
	scanf("%d",&TotalRows);
 	for(Rows=1;Rows<=TotalRows;Rows++)
 	{
	    for(Space=1;Space<=(TotalRows-Rows);Space++)	//(TotalRows - CurrentRows) is spaceLimit!!!
	    {
	    	printf("  ");
		}
	    for(Number=1;Number<=Rows;Number++)				//Increment until row number!!!
	    printf(" %d",Number);							//1-->2-->3-->4-->5--> if_6,condition falsed!!!
	    Number = Number -2;								// Input 5.So, printed Until 5 then Number is 6.(6-2)=4
		for(Number=Number;Number>=1;Number--)			//4-->3-->2-->1
	    printf(" %d",Number);

		printf("\n");
    }
    return 0;
}
