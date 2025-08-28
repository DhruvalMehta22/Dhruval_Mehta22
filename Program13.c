#include<stdio.h>
//Aim is to convert bytes into KB,MB AND GB//

int main()
{
    float a,b,c,d;
    printf("Enter your number of bytes \n");
    scanf("%f", &a);
    b = a/1024;
    printf("Your number of KB is : %f \n", b);
    c = b/1024;
    printf("Your number of Mb is : %f \n", c);
    d = c/1024;
    printf("Your number of Gb is : %f \n", d);
    return 0;
}
