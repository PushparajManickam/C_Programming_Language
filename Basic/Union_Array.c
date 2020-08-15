#include"stdio.h"
#include"string.h"
union Details
{
    char name[10];  //union MEMBER
    long phoneno;
};
int main()
{
union Details d[5];   //union VARIABLE
int Loop;
for(Loop=0;Loop<5;Loop++)
{
printf("Details of %d\n",Loop+1);
printf("Enter the name : ");
scanf("%s",d[Loop].name);
printf("Enter the phone number : ");
scanf("%ld",&d[Loop].phoneno);
printf("\n");
}
for(Loop=0;Loop<5;Loop++)
{
printf("\nDetails of %d\n",Loop+1);
printf("Name\t\t:\t%s\n",d[Loop].name);             //Not print correctly
printf("Phone number\t:\t%ld\n",d[Loop].phoneno);   //phone number print correctly
}
printf("\nPUSHPARAJ MANICKAM");
return 0;
}
//BY PUSHPARAJ MANICKAM