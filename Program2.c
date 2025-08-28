#include<stdio.h>

int main()
{
    float a,b;
    printf("enter your first digit");
    scanf("%f", &a);

    printf("enter your second digit");
    scanf("%f", &b);

    float c = a-b;
    printf("your difference is : %f", c);
    return 0;

}
