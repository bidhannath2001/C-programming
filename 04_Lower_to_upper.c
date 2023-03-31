//Lowercase to uppercase
#include<stdio.h>
int main ()
{
    char lower;
    printf("Enter any lowercase lettter: ");
    scanf("%c",&lower);
    printf("The uppercase letter= %c\n",lower-32);//A=65, a= 97, a-A= 32
}

//lowercase to uppercase with library function: 
/*
#include<stdio.h>
int maain ()
{
    char lower,upper;
    printf("Enter any lowercase letter: ");
    scanf("%c",&lower);
    upper=toupper(lower);
    printf("Uppercase letter= %c\n",upper);
}

*/