#include<stdio.h>
//Aim tp calculate the area and perimeter of rectangle//

int main()
{
    float a,b,c,d;
    printf("Enter the length of rectangle \n");
    scanf("%f", &a);
    printf("Enter the breadth of rectangle \n");
    scanf("%f", &b);
    c = a*b;
    printf("The Area of rectangle is : %f \n", c);
    d = 2*a + 2*b;
    printf("The Perimeter of rectangle is : %f \n", d);
    return 0;
}
