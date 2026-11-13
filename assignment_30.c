/*write a C program to count the number of even and odd elements in an array*/
#include <stdio.h>

int main()
{
    int n, i, even = 0, odd = 0; // n = number of elements, even/odd counters

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // declare array of size n

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        // Check whether the number is even or odd
        if (arr[i] % 2 == 0)
        {
            even++; // count even numbers
        }
        else
        {
            odd++; // count odd numbers
        }
    }

    printf("Number of even elements: %d\n", even);
    printf("Number of odd elements: %d\n", odd);

    return 0;
}