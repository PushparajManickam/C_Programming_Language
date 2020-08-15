#include"stdio.h"
#include"string.h"
union Details
{
    char name[10];  //Union MEMBER
    long phoneno;
};
int main()
{
union Details d;   //Union VARIABLE
union Details *ptr = &d;
printf("Enter the name : ");
scanf("%s",d.name);
printf("Enter the phone number : ");
scanf("%ld",&d.phoneno);
printf("Name\t\t:\t%s\n",ptr->name);                //not print correctly
printf("Phone number\t:\t%ld\n",ptr->phoneno);      //print correctly
printf("\nPUSHPARAJ MANICKAM");
return 0;
}
//BY PUSHPARAJ MANICKAM