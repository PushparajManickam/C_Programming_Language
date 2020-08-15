#include"stdio.h"
#include"string.h"
union Details
{
    char name[10];  //STRUCTURE MEMBER
    int Age;
};
int main()
{
union Details d;   //STRUCTURE VARIABLE
printf("Enter the name : ");
scanf("%s",d.name);
printf("Enter the age : ");
scanf("%d",&d.Age);
printf("Size of Union is %d\n",sizeof(d));
printf("Name\t\t:\t%s\n",d.name);//This memory occupied by phone number so, don't have seen this 
printf("Phone number\t:\t%d",d.Age);
printf("\nPUSHPARAJ MANICKAM");
return 0;
}
//BY PUSHPARAJ MANICKAM