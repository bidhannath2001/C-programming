#include<stdio.h>
int main ()
{
    int a=10;
    int b=20;
    int c;
    c= a&b;//and operation. multiplication
    printf("a&b= %d\n",c);
    c=a|b; //or operation. Add
    printf("a|b= %d\n",c);
    c=a^b;//x-or
    printf("a^b= %d\n",c);
    return 0;
}