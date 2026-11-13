/* write a program to print the multiplication table of a given number. */
#include <stdio.h>
int main()
{
    int i, n; printf("Enter a number : ");
    scanf("%d",  &n);

    printf("Multiplication table of %d is : \n",n);

    for( i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}