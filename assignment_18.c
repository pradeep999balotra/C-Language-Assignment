/*write a program to check whether a given number is Armstrong number.*/
#include <stdio.h>
int main()
{
    int num, originalNum, remainder, result = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);  

    originalNum = num;
    // store the number of digits of num in n       
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    // calculate the sum of the nth power of each digit 
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder; // assuming 3-digit Armstrong number
        originalNum /= 10;
    }

    if (result == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}