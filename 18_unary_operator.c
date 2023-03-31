#include<stdio.h>
int main ()
{
    int result= +6;     //positive value
    int result1= -6;    //Negative value
    printf("Result=  %d\n",result);
    printf("Result1=  %d\n",result1);

    int x=10;
    int y= x++; //postfix increment
    printf("x= %d\n",x);    //x=11
    printf("y= %d\n",y);    //y=10

    int m=10;
    int n= ++m;  //prefix increment
    printf("M= %d\n",m);    //m=11
    printf("N= %d\n",n);    //n=11


    int p=10;
    int q=p--; //postfix decrement
    printf("O= %d\n",p);    //p=9
    printf("P= %d\n",q);    //q=10


    int a=10;
    int b= --a; //prefix decrement
    printf("A= %d\n",a);    //a=9
    printf("B= %d\n",b);    //b=9


    int L=15;
    printf("%d\n",L++); //15
    printf("%d\n",L);   //16
    printf("%d\n",++L); //17
    printf("%d\n",L);   //17
    printf("%d\n",L--); //17
    printf("%d\n",--L); //15

}  