#include<stdio.h>
#include<string.h>
/*
int main ()
{
    char s1[]="Bidhan";
    strrev(s1);
    printf("s1= %s\n",s1);
    return 0;
}
*/
//without library function
int main()
{
    char s1[50]="Bidhan Nath";
    char s2[50];
    int i=0,j,len=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
   for(j=0,i=len-1;i>=0;i--,j++)
   {
        s2[j]=s1[i];
   }
   s2[j]='\0';
   printf("s2= %s\n",s2);
}