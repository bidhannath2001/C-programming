#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[]="Bidhan";
    int len=strlen(s1);
    printf("Length1= %d\n",len);

    //string length without len function

    char s2[50]="Bidhan Nath";
    int i=0,length=0;
    while(s2[i]!='\0')
    {
        i++;
        length++;
    } 
    printf("Length2= %d\n",length);
}