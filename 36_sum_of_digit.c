 //Write a program that read any positive integer and display sum of digits.

 #include<stdio.h>
 int main ()
 {
    int num,r,sum=0,temp;
    printf("Enter any integer: ");
    scanf("%d",&num);
    temp=num;
    while ((temp!=0))
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("Sum of digit= %d\n",sum);
    
 }