#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main ()
{
    char s1[100];
    int i,capital,small,digit;
    i=capital=small=digit=0;
    printf("Enter a string: ");
    gets(s1);
    while(s1[i]!='\0')
    {
        if(s1[i]>=65 && s1[i]<=90)
            capital++;
        else if(s1[i]>=97 && s1[i]<=122)
        small++;
        else if(s1[i]>=48 && s1[i]<=57)
            digit++;
            i++;
    }
    printf("Numeber of capital letter= %d\n",capital);
    printf("Numeber of small letter= %d\n",small);
    printf("Numeber of digit letter= %d\n",digit);
    return 0;
}