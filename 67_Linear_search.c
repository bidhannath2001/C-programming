#include<stdio.h>
int main ()
{
    int num[]={1,2,3,4,5,6,7,8,9,10};
    int value, pos=-1,i;
    printf("Enter the value that you want to search: ");
    scanf("%d",&value);
    for(i=0;i<10;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("Item is not found\n");
    }
    else
    printf("Item is found at %dth position\n",pos);
}