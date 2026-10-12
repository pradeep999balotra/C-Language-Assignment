/*write a program to check whether a given number is even or odd.*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
    return 0;
}