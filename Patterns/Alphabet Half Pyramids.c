#include<stdio.h>
int main()
{
	int Rows,Columns;
	char limit,Alphabet='A';
	printf("Enter The Limit : ");
	scanf("%c",&limit);
 	for(Rows=1;Rows<=(limit-'A'+1);Rows++) 	//(limit-'A'+1) is for loop start from 'one'.so, using the condition!
 	{										//if limit E (as 69) [69-65+1]==>[4+1]==>[5] 
	    for(Columns=1;Columns<=Rows;Columns++)	// 1 is A; 2 is B; 3 is C; 4 is D; 5 is E;   
		{
	   	printf("%c ",Alphabet);
  	  	}
  	  	++Alphabet;
		printf("\n");
    }
    return 0;
}
