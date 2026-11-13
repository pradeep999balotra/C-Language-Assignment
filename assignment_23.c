/*write a program to calculate the power of a number using a user-defined function with call by'value.*/
#include <stdio.h>

long long calculatePower(int base, int exponent)
{
    long long result = 1;  // start from 1
    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;  // multiply base repeatedly
    }
    return result;
}

int main()
{
    int base, exponent;  // user input
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    long long power = calculatePower(base, exponent);  // call function
    printf("%d raised to the power of %d is %lld\n", base, exponent, power);

    return 0;
}