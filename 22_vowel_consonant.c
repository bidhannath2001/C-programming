#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter any letter: ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            printf("The letter is vowel\n");
        }
        else
        {
            printf("The letter is consonant\n");
        }
}