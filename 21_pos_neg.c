#include<stdio.h>
int main ()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("This is a positive number\n");
    }
    else if(num<0)
    {
        printf("This is a negative number\n");
    }
    else if(num==0)
    {
        printf("Zero\n");
    }

}