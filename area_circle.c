#include<stdio.h>
int main()
{
    float r,a;
    printf("\nThis program calculates the area of circle\n");
    printf("Enter the length of radius of circle : ");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("The area of circle is %f",a);
    return 0;

}