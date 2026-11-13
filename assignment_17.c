/* write a program to reverse a given integer (e.g.- 1234 becomes 4321) and check whether it is palindrome. */
#include <stdio.h>
int main()
{
    int num, originalNum, reversedNum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        reversedNum = reversedNum * 10 + remainder;
        originalNum /= 10;
    }
    if (reversedNum == num)
    {
        printf("%d is a palindrome.\n", num);
    }
    else
    {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}