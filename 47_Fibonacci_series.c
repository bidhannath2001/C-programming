#include<stdio.h>
int main ()
{
    int First=0,second=1,count=0,Fibo,n;
    printf("Enter range: ");
    scanf("%d",&n);
    while (count<n)
    {
        if(count<=1)
        {
            Fibo=count;
        }
        else
        {
            Fibo=First+second;
            First=second;
            second=Fibo;
        }
        printf("%d ",Fibo);
        count++;
    }
}