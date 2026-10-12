/*write  a program to find the largest of three numbers.*/
#include <stdio.h>
int main()
{
    // variiable diclaration
    int num1, num2, num3 ;

    // print each num. by user using scanf
    printf("Enter num1 : ");
    scanf("%d",&num1);

    printf("Enter num2 : ");
    scanf("%d",&num2);

    printf("Enter num3 : ");
    scanf("%d",&num3);

    // & is stand for AND (agar yha dono condition true hoti hai to output display hoga)
    if(num1>num2 && num1>num3) {
        printf("%d is the largest", num1);
    } else if (num2>num1 && num2>num3) {
        printf("%d is the largest", num2);
    } else if (num3>num1 && num3>num2) {
        printf("%d is the largest", num3);
    }

    return 0;
}