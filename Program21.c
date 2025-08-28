#include<stdio.h>
/*Aim is to calculate the net sales
where net sales = gross sales - 10%discount*/

int main()
{
    float a,b,c;
    printf("Enter your gross sales \n");
    scanf("%f", &a);
    b = 0.1*a;
    c = a - b;
    printf("Your net sales is : %f \n", c);
    return 0;
}
