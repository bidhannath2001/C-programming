//A palindrome that prints same number after revesing

#include<stdio.h>
int main ()
{
    int num,r,temp,sum=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=num;
    while (temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    if(num==sum)
    {
        printf("It is a palindrome number\n");
    }
    else
    printf("It is not a palindrome");
    return 0;
}