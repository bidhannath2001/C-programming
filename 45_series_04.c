//  1 + 1/2 + 1/3 + 1/4 +..........+1/n?
#include<stdio.h>
int main ()
{
    
    double sum=0,i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum+(1/i);
    }
    printf("1 + 1/2 + 1/3 + 1/4 +..........+1/%d",n);
    printf("=%.2lf\n",sum);
} 