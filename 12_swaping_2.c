//Swap to numbers without temporary values;
#include<stdio.h>
int main ()
{
    int num1=20;
    int num2=10;
    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;
    printf("Num1= %d\n",num1);
    printf("Num2= %d\n",num2);
    return 0;
}