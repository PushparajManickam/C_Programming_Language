#include"stdio.h"
#include"string.h"
int main()
{
int p=11;
int *ptr;
ptr = &p;
printf("Address of p is %p\n",&p);
printf("Value of p is %d\n",p);
printf("Address of ptr is %p\n",ptr);
//printf("Address of ptr is %p\n",&ptr);
printf("Value of p is %d",*ptr);
printf("\nPUSHPARAJ MANICKAM\n");
return 0;
}
//BY PUSHPARAJ MANICKAM