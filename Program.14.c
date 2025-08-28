#include<stdio.h>
//Aim is to convert celsius into Fahrenheit//

int main()
{
    float a,b,c;
    printf("Enter your temperature in celsius \n");
    scanf("%f", &a);
    b = 1.8*a +32;
    printf("Your Temperature in Farenheith is : %f \n", b);
    return 0;
}
