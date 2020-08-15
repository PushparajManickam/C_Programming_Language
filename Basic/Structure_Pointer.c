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
struct Details *ptr = &d;
printf("Enter the name : ");
scanf("%s",d.name);
printf("Enter the phone number : ");
scanf("%ld",&d.phoneno);
printf("Name\t\t:\t%s\n",ptr->name);
printf("Phone number\t:\t%ld\n",ptr->phoneno);
printf("\nPUSHPARAJ MANICKAM");
return 0;
}
//BY PUSHPARAJ MANICKAM