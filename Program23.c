#include<stdio.h>

int main()
{
    float a,b,c,d,e;
    printf("Enter your first number \n");
    scanf("%f", &a);
    printf("Enter your second number \n");
    scanf("%f", &b);
    printf("Enter your third number \n");
    scanf("%f", &c);
    d = a+b+c;
    e = d/3;
    printf("the average of three numbers is : %.2f \n", e);
    return 0;
}
