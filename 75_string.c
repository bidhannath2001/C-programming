#include<stdio.h>
int main ()
{
    char s1[7]={'B','I','D','H','A','N'};   //Minimum use one index more than character for null character.
    char s2[]= "BIDHAN Nath";
    char s3[]= "Bidhan\nNath";
    printf("%s\n",s1);
    printf("%s\n",s2);
    printf("%s\n",s3);//Multiple line
    return 0;
}