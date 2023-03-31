#include<stdio.h>
int main ()
{
    int i,j,n;
    int A[3][4];
    //Scaning A matrix
    printf("Enter Element of A Matrix: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //printint A matrix

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}