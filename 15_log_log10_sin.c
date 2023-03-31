//lof(),log10(),exp(),sin(),cos(),tan()
#include<stdio.h>
#include<math.h>
int main ()
{
    double x=10.5;
    double result= log(x);
    double result1= log10(x);
    double result2= exp(x);
    double result3= sin(x);
    double result4= cos(x);
    double result5= tan(x);

    printf("Result= %.2lf\n",result);
    printf("Result1= %.2lf\n",result1);
    printf("Result2= %.2lf\n",result2);
    printf("Result3= %.2lf\n",result3);
    printf("Result4= %.2lf\n",result4);
    printf("Resultr5= %.2lf\n",result5);

}