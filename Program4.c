#include<stdio.h>

int main()
{
    int a;
    float b,c;
    printf("enter your first digit\n");
    scanf("%d", &a);
    printf("enter your second digit\n");
    scanf("%f", &b);
    c=a/b;
    printf("your answer is :");
    printf("%d/%f=%f", a,b,c);
    return 0;


}
