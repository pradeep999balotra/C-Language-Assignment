/* Program to find max and min of two numbers */
#include <stdio.h>

int findMax(int a, int b)
{
    if (a > b)
    {
        return a; // bigger number
    }
    else
    {
        return b; // bigger number
    }
}

int findMin(int a, int b)
{
    if (a < b)
    {
        return a; // smaller number
    }
    else
    {
        return b; // smaller number
    }
}

int main()
{
    int num1, num2; // input numbers

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Maximum: %d\n", findMax(num1, num2));
    printf("Minimum: %d\n", findMin(num1, num2));

    return 0;
}