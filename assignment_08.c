/*write a program to input a student's marks and assing a grade (A,B,C,D,F) using if else ladder.*/
#include <stdio.h>
int main()
{
    // variable diclaration
    int marks;

    // enter marks as input by user
    printf("Enter student marks(0-100) : ");
    scanf("%d", &marks);
    
    // || is stand for OR (jab marks ya to 0 ke kam ho yaa 100 se jayada)
    if (marks<0 || marks>100) {
        printf("Invalid marks!, please enter valid marks(0-100).");
    }
    else if (marks >= 85 && marks <= 100)
    {
        printf("Grade : A\nResult : Excellent");
    } 
    else if (marks >= 70 && marks <= 84)
    {
        printf("Grade : B\nResult : Good");
    }
    else if (marks >= 50 && marks <= 69)
    {
        printf("Grade : C\nResult : Average");
    }
    else if (marks >= 33 && marks <= 49)
    {
        printf("Grade : D\nResult : PASS");
    } else {
        printf("Grade : F\nResult : Fail");
    }
    return 0;
}