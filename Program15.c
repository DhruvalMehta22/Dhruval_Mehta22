#include<stdio.h>
//Aim is to convert Fahrenheit into celsius//

int main()
{
    float a,b;
    printf("Enter your temperature in Fahrenheit \n");
    scanf("%f", &a);
    b = 0.55*a - 0.55*32;
    printf("your temperature in celsius is : %f \n", b);
    return 0;
}
