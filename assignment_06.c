/* write a program to convert tempreture from celcius to fahrenheit and fahrenheit to celsius take the temprature as input from the user. */
#include <stdio.h>
int main()
{  
    //variable declaration
    float celsius, fahrenheit;
    
    // Celsius to Fahrenheit
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %f\n", fahrenheit);

    // Fahrenheit to Celsius
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celsius = %f\n", celsius);

    return 0;
}
