/*write a function calculateFactorial() that takes an integer as an argument and returns its factorial */
#include <stdio.h>

int calculateFactorial(int n)
{
    int i, factorial = 1; // start from 1 and multiply up to n
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i; // multiply by each number
    }
    return factorial;
}

int main()
{
    int number; // user input
    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("The factorial of %d is %d.\n", number, calculateFactorial(number));

    return 0;
}