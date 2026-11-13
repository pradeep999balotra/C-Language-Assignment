/*write a function isPrime() that takes an integer as an argument and returns 1 if it is a prime number, otherwise returns 0 */
#include <stdio.h>

int isPrime(int n)
{
    // number less than or equal to 1 are not prime numbers
    if (n <= 1)
    {
        return 0;
    }

    int i;
    // 2 se lekar n tak simple loop chalana
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0; // agar n kisi bhi number se divide ho jata hai to prime nahi hai
        }
    }
    return 1; // agar loop complete ho gaya aur koi bhi divisor nahi mila to prime hai
}

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isPrime(number))
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
