//Print the Number in word
#include<stdio.h>
int main()
{
    int Number,ReverseNumber=0,Remainder;
    printf("Enter the number : ");
    scanf("%d",&Number);
        while(Number)                           //Just reverse the number
        {
            Remainder           = Number%10;
            ReverseNumber       = (ReverseNumber * 10) + Remainder;
            Number              = Number/10;
        }
    while(ReverseNumber)
    {
        Number = ReverseNumber%10;
        switch(Number)
        {
            case 0: printf("Zero ");
                    break;
            case 1: printf("One ");
                    break;
            case 2: printf("Two ");
                    break;
            case 3: printf("Three ");
                    break;
            case 4: printf("Four ");
                    break;
            case 5: printf("Five ");
                    break;
            case 6: printf("Six ");
                    break;
            case 7: printf("Seven ");
                    break;
            case 8: printf("Eight ");
                    break;
            case 9: printf("Nine ");
                    break;
        }
        ReverseNumber=ReverseNumber/10;
    }
    printf("\nPUSHPARAJ MANICKAM!!!\n");
    return 0;
}
//PUSHPARAJ MANICKAM!!!