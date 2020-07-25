#include<stdio.h>
int main()
{
	int Rows,Columns,limit;
	printf("Enter The Limit : ");
	scanf("%d",&limit);
 	for(Rows=limit;Rows>=1;Rows--)
 	{
 		for(Columns=1;Columns<=Rows;Columns++)
		{
	   	printf("%d ",Columns);
  	  	}
		printf("\n");
    }
    return 0;
}
