//The sum of factorial of each digit is the same of previous number that is a strong number.
#include<stdio.h>
int main ()
{
    int i,fact=1,num,temp,r,sum=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("%d is a strong number\n",num);
    }
    else
    printf("%d is not a strong number\n",num);
}