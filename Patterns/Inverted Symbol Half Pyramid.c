#include"stdio.h"
int main()
{
	int Rows,Space,limit,Symbol;
	printf("Enter the limit : ");
	scanf("%d",&limit);
	for(Rows=limit;Rows>=1;--Rows)
	{
		for(Space=1;Space<=(limit-Rows);Space++)
		printf("  ");
		for(Symbol=Space;Symbol<=limit;Symbol++)
		printf(" *");
		printf("\n");
	}
}
