#include<stdio.h>

int main()
{
    int a,b;
    float c,d,e,f;
    printf("enter your first digit \n");
    scanf("%d", &a);
    printf("enter your second digit \n");
    scanf("%d", &b);
    c = a+b;
    printf("your sum is : %f \n", c);
    d = a-b;
    printf("your difference is : %f \n", d);
    e = a*b;
    printf("your product is : %f \n", e);
    f = a/b;
    printf("your answer is : %f \n", f);
    return 0;
}



