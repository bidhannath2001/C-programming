#include<stdio.h>
#include<string.h>
int main ()
{
    char source[]="C Programming";
    char target[20];
    strcpy(target,source);
    printf("Target string= %s\n",target);
    return 0;
}