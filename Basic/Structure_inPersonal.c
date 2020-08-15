#include"stdio.h"
#include"string.h"
struct Details
{
    char name[10];  //STRUCTURE MEMBER
    long phoneno;
};
int main()
{
struct Details d;   //STRUCTURE VARIABLE
printf("Enter the name : ");
scanf("%s",d.name);
printf("Enter the phone number : ");
scanf("%ld",&d.phoneno);
printf("Name\t\t:\t%s",d.name);
printf("\nPhone number\t:\t%ld",d.phoneno);
printf("\nPUSHPARAJ MANICKAM");
return 0;
}
//BY PUSHPARAJ MANICKAM