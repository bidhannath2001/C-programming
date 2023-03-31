//If the sum of the cube of each digit is equal to the previous number, 
//it is called Armstrong number

#include<stdio.h>
int main ()
{
    int num,i,r,temp,sum=0;
    
    for(i=1;i<=1000;i++){
    temp= i;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(sum==i)
    {
        printf("%d, ",i);
    }
    sum=0;
    }
    printf("\n");
    
}