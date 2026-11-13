/*write a C program to search for a given element in an array using Linear Search */
#include <stdio.h>

int main()
{
    int n, i, element, found = 0; // n = array size, found = flag

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // array declaration

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &element);

    // Check each element one by one
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            printf("Element found at index %d\n", i + 1);
            found = 1; // mark that element is found
        }
    }

    if (found == 0)
    {
        printf("Element not found in the array\n");
    }

    return 0;
}