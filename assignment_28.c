/*write a C program to find the largest and smallest element in an array*/
#include <stdio.h>

int main()
{
    int n, i, largest, smallest; // n = number of elements

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // declare array

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];

    // Compare each element with the current largest and smallest
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);
    printf("The smallest element in the array is: %d\n", smallest);

    return 0;
}
