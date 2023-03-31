#include<stdio.h>
int main ()
{
    int row,col,n;
    printf("Enter N: ");
    scanf("%d",&n);
    for(row=1;row<=2;row++)
    {
        for(col=1;col<=9;col++)
        {
            if(col>2-row && col<=2+row || col>7-row && col<=7+row)
            {
                printf("* ");
            }
            else
            printf("  ");
        }
        printf("\n");
    }
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            printf("  ");
        }
        for(col=1;col<=2*row-1;col++)
        {
            printf("* ");
        }  
        printf("\n");
    }  
}