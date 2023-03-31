//round(), trunc(), ceil(), floor()
#include<stdio.h>
#include<math.h>
int main ()
{
    double x=10.5;
    double result= round(x);       //whole number print
    double result1= trunc(x);      //floating point remove
    double result2= ceil(x);       //Above is the nearest whole number print
    double result3= floor(x);      //Below is the nearest whole number print

    printf("Result= %.2lf\n",result);
    printf("Result1= %.2lf\n",result1);
    printf("Result2= %.2lf\n",result2);
    printf("Result3= %.2lf\n",result3);
}