#include<stdio.h>
int main ()
{
    int row,col,i,j;
    int A[10][10],B[10][10];
    printf("Enter the number of rows and cols: ");
    scanf("%d %d",&row,&col);

    //scaning A matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //printing A matirx
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

    //Transpose matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            B[j][i]=A[i][j];
        }
    }

    //printing Transpose matrix
    printf("Trans= ");
    for(i=0;i<col;i++)
    {
        printf("\t");
        for(j=0;j<row;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

}