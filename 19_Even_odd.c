 #include<stdio.h>
 int main ()
 {
    int num;
    printf("Enter any integer number: ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("This is an Even number\n");
    }
    else
    {
        printf("This is an odd number\n");
    }
    return 0;
 }