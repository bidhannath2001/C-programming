#include<stdio.h>
int main ()
{
    char s1[10];
    char s2[20];
    printf("Enter s1= ");
    scanf("%s",&s1);
    printf("%s\n",s1);

    printf("Enter s2= ");
    gets(s2);   //Multiple word scanning process
    printf("%s\n",s2);
}