#include<stdio.h>

int main()
{
    int a,b;
    printf("enter two number");
    scanf("%d%d", &a,&b);

    float c = a*b;
    printf("your product is :");
    printf("%d*%d=%f",a,b,c);
    return 0;
}
