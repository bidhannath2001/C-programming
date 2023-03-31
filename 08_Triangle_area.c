//Write a program that calculates the area of triangle:
#include<stdio.h>
int main ()
{
    float base,height,area;
    printf("Base= ");
    scanf("%f",&base);
    printf("Height= ");
    scanf("%f",&height);
    area=(float)1/2*base*height;
    printf("Area is %.2f\n",area);
}