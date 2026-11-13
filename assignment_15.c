/* write a program to genreat the fibonacci series up to N terms using a loop */
 #include <stdio.h>
 int main()
 {
    int N ;
    int first = 0, second = 1, next ;
    
    printf("Enter number of terms : ");
    scanf("%d",&N);

    printf("Fibonacci series up to %d terms : \n",N);

    for( int i = 0; i <= N; i++)
    {
        printf("%d\t",first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
 }