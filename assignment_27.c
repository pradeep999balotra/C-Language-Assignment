/*Write a C program to find the sum and average of all elements in an array*/
#include <stdio.h>

int main()
{
    int n, i;              // n = number of elements, i = loop counter
    float sum = 0, avg;    // sum stores total, avg stores average

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // array of size n

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i]; // add each value to sum
    }

    avg = sum / n; // calculate average

    printf("Sum of the array elements: %.2f\n", sum);
    printf("Average of the array elements: %.2f\n", avg);

    return 0;
}

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//         int sum = 0;
//     float average;

//     for (int i = 0; i < 5; i++) {
//         sum += arr[i];
//     }

//     average = (float)sum / 5;

//     printf("Sum: %d\n", sum);
//     printf("Average: %.2f\n", average);

//     return 0;
// }
