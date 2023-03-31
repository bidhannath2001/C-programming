#include <stdio.h>
 
int main() {
    int array[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Array= ");
    for(i=9;i>=0;i--)
    { 
        array[i]=i+1;
        printf("%d, ",array[i]);
    }
    
    return 0;
}