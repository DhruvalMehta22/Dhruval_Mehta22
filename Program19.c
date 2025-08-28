#include<stdio.h>
//Aim is to calculate the area of triangle//

int main()
{
    float a,b,c;
    printf("Enter the side of the triangle \n");
    scanf("%f", &a);
    printf("Enter the height of the triangle \n");
    scanf("%f", &b);
    c = 0.5*a*b;
    printf("The area of the triangle is : %f \n", c);
    return 0;
}
