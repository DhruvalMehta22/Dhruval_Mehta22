#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the side of your square \n");
    scanf("%d",&a);
    b = a*a;
    printf("Area");
    printf("%d*%d=%d\n",a,a,b);
    c = a*4;
    printf("Perimeter");
    printf("%d*4=%d",a,c);
    return 0;
}
