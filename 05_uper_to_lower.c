//Uppercase to lowercase
#include<stdio.h>
int main ()
{
    char upper;
    printf("Enter any uppercase letter: ");
    scanf("%c",&upper);
    printf("The lowercase letter is %c\n",upper+32);
}

//Uppercase to lowercase with library function: 
/*
#include<stdio.h>
int main ()
{
    char upper,lower;
    printf("Enter any uppercase letter: ");
    scanf("%c",&upper);
    lower=tolower(upper);
    printf("The lowercase letter is %c\n",lower);
}

*/