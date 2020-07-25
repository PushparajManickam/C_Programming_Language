#include<stdio.h>
int main()
{
	int Rows,Space,Symbol,TotalRows;
	printf("Enter The Limit : ");
	scanf("%d",&TotalRows);
 	for(Rows=1;Rows<=TotalRows;Rows++)
 	{
	    for(Space=1;Space<=(TotalRows-Rows);Space++)	//(TotalRows - CurrentRows) is spaceLimit!!!
	    printf("  ");
	    for(Symbol=1;Symbol<=(2*Rows-1);Symbol++)		//(2*Rows); then, as substrated center so, minus -1
	    printf(" *");
		printf("\n");
    }
    return 0;
}
