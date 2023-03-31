//Arithmetic series
//  1+2+3+4+5+...........+n?

#include<stdio.h>
int main ()
{
    int n,d,i,sum=0;
    printf("Enter the last number of sereis: ");
    scanf("%d",&n);
    d=1;
    printf("1+2+3+4+5+...........+%d?\n",n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("1+2+3+4+5+...........+%d = %d\n",n,sum);
    getch();
}