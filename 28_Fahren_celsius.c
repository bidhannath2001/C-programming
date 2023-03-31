//Fahrenheit to celcius or celcius to Fhatrenheit with switch statement

#include<stdio.h>
int main ()
{
    int choice;
    float temp,converted_temp;
    printf("Temperature conversion menu\n");
    printf("If you want to convert Fahrenheit to celcius, please press 1\n");
    printf("If you want to convert Celcius to Fahrenheit, please press 2\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        {
            printf("Enter the Fahrenheit temp: ");
            scanf("%f",&temp);
            converted_temp=(temp-32)/1.8;
            printf("The temp in celcius is : %.1f\n",converted_temp);
        }
        break;
    case 2:
        {
            printf("Enter the Celcius temp: ");
            scanf("%f",&temp);
            converted_temp=(1.8*temp)+32;
            printf("The temp is Fahrenheit is: %.1f\n",converted_temp);
        }
        break;
    
    default:
    printf("Not a correct option\n");
        break;
    }
    
}