//Centigrate to Fharenheit
#include<stdio.h>
int main ()
{
    float Centigrate, Fharenheit;
    printf("Enter any Centigrate Temperature: ");
    scanf("%f",&Centigrate);
    Fharenheit=(Centigrate*1.8)+32;
    printf("Fharenheit Temperature is= %.2f\n",Fharenheit);
}