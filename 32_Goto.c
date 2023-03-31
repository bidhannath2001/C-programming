#include<stdio.h>
int main()
{
    int i=1;
    print:  //lebel
    printf("%d\n",i);
    i++;
    if(i<5)
    goto print; //lebel is calling here
    return 0;
}