//  Geometric series
//  1*2 + 2*3 + 3*4 + 4*5 + .............+n1*n2?

#include<stdio.h>
int main()
{
    int n1,n2,sum=0,i,a=1,b=2;
    printf("Enter n2 and n2: ");
    scanf("%d %d",&n1,&n2);
    printf("1*2 + 2*3 + 3*4 + ........+ %d*%d",n1,n2);
    while(a<=n1 && b<=n2)
    {
        sum=sum+a*b;
        a++;
        b++;
    }
    printf(" = %d\n",sum);
    return 0;
}