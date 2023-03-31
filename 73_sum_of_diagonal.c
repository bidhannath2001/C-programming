#include<stdio.h>
int main ()
{
    int i,j,row,col;
    int A[10][10], sum=0;
    printf("Enter the number of Rows and Cols: ");
    scanf("%d %d",&row,&col);
    //scaning A
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }

    }
    
    //prnting A matrix

    printf("A= ");
    for(i=1;i<=row;i++)
    {
        printf("\t");
        for(j=1;j<=col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //Sum of diagonal elemnets

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i==j)
            {
                sum= sum+ A[i][j];
            }
        }
    }
    printf("Sum of diagonal elemnets = %d\n",sum);
}