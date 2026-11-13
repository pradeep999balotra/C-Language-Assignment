/*Write a program to print all prime numbers between 1 and N, where N is
entered by the user*/
#include <stdio.h>
int main()
{
    int N;
    printf("Enter N : ");
    scanf("%d",&N);

    printf("All Prime numbers between 1 & %d\n",N);

    for( int i=1; i<=N; i++ )
    {
        int n = 2;
        for( n=2; n<i; n++ )
        {
            if( i % n == 0 )
            break;
        }
        if( n == i )
           printf("%d\n",i);
    }
    return 0;
}
