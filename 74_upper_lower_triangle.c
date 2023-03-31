#include<stdio.h>
int main()
{
    int i,j,row,col,upperSum=0,lowerSum=0;
    int A[10][10];
    printf("Enter the number of row and col: ");
    scanf("%d %d",&row,&col);

    //scanning A matrix

    printf("Elements of A matrix\n");
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //printing A matrix

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

    //sum of upper and lower triangle elements

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i<j)
            {
                upperSum = upperSum + A[i][j];
            }
            if(i>j)
            {
                lowerSum = lowerSum + A[i][j];
            }
        }
    }
    printf("Sum of upper triangle= %d\n",upperSum);
    printf("Sum of lower triangle= %d\n",lowerSum);
    //return 0;
}