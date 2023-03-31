#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[20]="Bangladesh";
    char str2[20]="India";
    char temp[20];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("Str1=%s\n",str1);
    printf("str2=%s\n",str2);
    return 0;
}