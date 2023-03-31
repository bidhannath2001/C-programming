#include<stdio.h>
int main ()
{
    int i,j,k,r1,r2,c1,c2,sum=0;
    int A[10][10],B[10][10],C[10][10],result[10][10];
    printf("If col of 1st matrix and row of 2nd matrix are equal then multiplication is possible\n");
    printf("Enter number of r1 c1, r2 c2: ");
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);

    if(c1!=r2)
    {
        printf("Invalid rows and cols number\n");
        printf("please try again\n");
    }
    else
    {
    //scaning A
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
            printf("\n");
    }

    //scaning B
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
            printf("\n");
        }

    //printing A
    printf("A= ");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c1;j++)
        {
            printf("%d ",A[i][j]);
        }
            printf("\n");
        }

    //printing B
    printf("B= ");
    for(i=0;i<r2;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum=sum+A[i][k] * B[k][j];
                //sum= sum+ A[0][0] * B[0][0] + a[0][1] * B[1][0];
            }
            result[i][j]=sum;
            sum=0;
        }
    }

    //printing A*B
    printf("A*B= ");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c1;j++)
        {
            printf("%d ",result[i][j]);
        }
            printf("\n");
        }

        
    }
  
}
       
        