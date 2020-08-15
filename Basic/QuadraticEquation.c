//Find the quadratic equation
#include<math.h>
#include<stdio.h>
int main()
{
double a, b, c, Discriminant, Real_Part,Imaginary_Part, Quadratic_Equation1, Quadratic_Equation2;
printf("Enter the number of a : ");
scanf("%lf",&a);
printf("Enter the number of b : ");
scanf("%lf",&b);
printf("Enter the number of a : ");
scanf("%lf",&c);
Discriminant = (b * b) - (4 * a *c);
if(Discriminant == 0)
{
printf("Root are real and equal\n");
Quadratic_Equation1 = Quadratic_Equation2 = -b / (2 * a);
printf("QUADRATIC EQUATION 1 is %.2lf\n",Quadratic_Equation1);
printf("QUADRATIC EQUATION 2 is %.2lf\n",Quadratic_Equation2);
}
else if(Discriminant>0)
{
printf("Root are real and different\n");
Quadratic_Equation1 = (-b + sqrt(Discriminant)) / (2 * a);
Quadratic_Equation2 = (-b - sqrt(Discriminant)) / (2 * a);
printf("QUADRATIC EQUATION 1 is %.2lf\n",Quadratic_Equation1);
printf("QUADRATIC EQUATION 2 is %.2lf\n",Quadratic_Equation2);
}
else if(Discriminant<0)
{
printf("Root are imaginary\n");
Real_Part =  (-b ) / (2 * a);
Imaginary_Part =  sqrt(-Discriminant) / (2 * a);
printf("QUADRATIC EQUATION 1 is %.2lf + i %.2lf\n",Real_Part, Imaginary_Part);
printf("QUADRATIC EQUATION 2 is %.2lf - i %.2lf\n",Real_Part, Imaginary_Part);
}

printf("BY PUSHPARAJ MANICKAM!!!\n");
return 0;
}
//BY PUSHPARAJ MANICKAM