/*write a program to check whether a given number is positive, negative, or zero. */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    
    if(n > 0) {
        printf("%d is positive\n",n);
    } 
    else if (n < 0) {
        printf("%d is negative\n",n);
    } 
    else if (n == 0) {
        printf("%d is zero\n",n);
    }       
    return 0;
} 