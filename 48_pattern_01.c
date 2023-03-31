#include<stdio.h>
int main ()
{
    int n,col,row;
    printf("Enter N= ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",col);
            //printf("%d ",row);
            //printf("%d ",col%2);
            //printf("%d ",row%2;
            //printf("%d ",col+64);
            //printf("%d ",row+64);

            
        }
        printf("\n");
    }
}