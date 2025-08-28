#include<stdio.h>
/* Aim is to calculate the net sallary.
allowances are 10% while deductions are 3% of gross salary */

int main()
{
    float a,b,c,d;
    printf("Enter your gross salary");
    scanf("%f", &a);
    b = 0.1*a;
    c = 0.03*a;
    d = a + b - c;
    printf("Your net salary is : %f \n", d);
    return 0;

}

