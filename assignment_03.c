/* write a program to swap two integers using a temporary variable. */
#include<stdio.h>
int main()
{
    int n1,n2,temp;
    printf ( " enter a number : ");
    scanf ("%d", &n1); // scanf is useed to take integer input from user

    printf (" enter a second number : "); 
    scanf ("%d",&n2 ); // user se input lene ke liye "&" ka use kare
   
    temp = n1; 
    n1=n2 ;
    n2=temp; 
 
    printf (" the number after swap are %d and %d ", n1,n2); 
    return 0;
 } 


/* write a program to swap two integers using a temporary variable, fixed number le liye */
// #include<stdio.h>
// int main()
// {
//     int n1,n2,temp;
//     n1 = 5;
//     n2 = 12;
//     printf (" enter a number : %d\n",5);
//     printf (" enter a second number : %d\n",12); 
    
//     temp = n1; 
//     n1 = n2 ;
//     n2 = temp; 
   
//     printf (" the number after swap are %d and %d ", n1,n2); 
//     return 0;

// } 