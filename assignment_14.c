/*write a program to find the factorial of a given number using loop.*/ 
#include <stdio.h>
int main()
{

    // variable declarations
    int n ;                  // user se input lene ke liye number         
    long long  f = 1;        // Factorial store  karne ke liye (long long ka use kiya hai taki bade numbers par overflow na ho)
    
    // user se number enter karwana
    printf("Enter a number to find Factorial : ");
    scanf("%d",&n);

    // Edge case : negative numbers ka factorial define nahi hota 
    if(n < 0) {
        printf("Factorial is not define for negative numbers.\n");
        return 1;  //program ko exit karne ke liye error code ke sath
    }
    
    // loop to calculate factorial (1 se lekar n tak multiply karna)
    for( int i = 1; i <= n; i++)
    {
        f = f*i;
    }
    
    // result display karna (%d integer ke liye %lld long long ke liye)
    printf("Factorial of %d is %lld\n", n, f);
    return 0; // program successfully execute ho gaya
}