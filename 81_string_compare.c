#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[]="Bidhan Nath";
    char s2[]="Bidhan";
    int d= strcmp(s1,s2);
    if(d==0)
    {
        printf("Strings are equal\n");
    }
    else
        printf("Strings are not equal\n");
    return 0;
}