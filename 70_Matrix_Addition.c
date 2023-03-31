#include<stdio.h>
int main ()
{
    int A[10][10], B[10][10],C[10][10];
    int i,j,row,col;
    printf("Enter the number rows and cols: \n");
    scanf("%d %d",&row,&col);
    printf("Elemnets of number A matrix\n");

    //Scaning A matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //scaning B matrix
    printf("Elements of number B matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    //printing A matrix

    printf("A= ");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //printing B matrix

    printf("B= ");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Adding A+B

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            C[i][j]= A[i][j] + B[i][j];
        }
    }

    //printing c matrix
    printf("A+B= ");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}