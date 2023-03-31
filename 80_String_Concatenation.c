#include<stdio.h>
#include<string.h>
/*
int main ()
{
    char s1[]="Bidhan";
    char s2[]=" Nath\n";
    strcat(s1,s2);
    printf("S1= %s",s1);
    return 0;
}

*/
//Without library function 

int main ()
{
    char s1[50]="My name is ";
    char s2[]="Bidhan Kanti Nath\n";
    int i=0,j=0,len=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    while(s2[j]!='\0')
    {
        s1[len+j]=s2[j];
        j++;
    }
    printf("S1= %s\n",s1);
}