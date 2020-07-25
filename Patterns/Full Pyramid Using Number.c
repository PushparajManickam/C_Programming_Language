#include<stdio.h>
int main()
{
	int Rows,Space,Number,TotalRows,Count=1;
	printf("Enter The Limit : ");
	scanf("%d",&TotalRows);
 	for(Rows=1;Rows<=TotalRows;Rows++)
 	{
 		
	    for(Space=1;Space<=(TotalRows-Rows);Space++)	//(TotalRows - CurrentRows) is spaceLimit!!!
	    {
	    	printf("  ");
		}
	    for(Number=1;Number<=Rows;Number++)			
	    {
	    	printf(" %d ",Count);
	    	Count++;
		}
		printf("\n");
    }
    return 0;
}
