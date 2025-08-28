#include<stdio.h>
//Aim to calculate the average of three subjects along with their total//

int main()
{
    float a,b,c,d,e;
    printf("Enter your score in first subject \n");
    scanf("%f", &a);
    printf("Enter your score in second subject \n");
    scanf("%f", &b);
    printf("Enter your score in third subject \n");
    scanf("%f", &c);
    d = a+b+c;
    printf("The total scpre pf all three subjects is : %.1f \n", d);
    e = d/3;
    printf("The average of the score of three subjects is : %.1f \n", e);
    return 0;

}
