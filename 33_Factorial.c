#include<stdio.h>
int main ()
{
    int i, fact=1,n;
    printf("Enter any integer: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d Factorial= %d\n",n,fact);
    return 0;
}