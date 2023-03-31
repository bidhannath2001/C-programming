#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter any lette: ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("This is small letter\n");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("This is capital letter\n");
    }

}