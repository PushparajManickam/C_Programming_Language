#include"stdio.h"
#include"string.h"
struct Date
{
    int dd,mm,yy;
};
struct Details
{
    char name[10];  //STRUCTURE MEMBER
    long phoneno;
    struct Date DOB;
};
int main()
{
struct Details d;   //STRUCTURE VARIABLE
printf("Enter the name : ");
scanf("%s",d.name);
printf("Enter the phone number : ");
scanf("%ld",&d.phoneno);
printf("Enter the Date of Birth (DD-MM-YYYY) : ");
scanf("%d",&d.DOB.dd);
scanf("%d",&d.DOB.mm);
scanf("%d",&d.DOB.yy);
printf("\nDetails\n");
printf("Name\t\t:\t%s\n",d.name);
printf("Phone number\t:\t%ld\n",d.phoneno);
printf("Date of Birth : %d-%d-%d",d.DOB.dd,d.DOB.mm,d.DOB.yy);
printf("\nPUSHPARAJ MANICKAM");
return 0;
}
//BY PUSHPARAJ MANICKAM