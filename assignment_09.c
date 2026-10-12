/*write a program to demostrate the use of switch-case statement.*/
#include <stdio.h>
int main()
{
    int Day;
    printf("Enter a day(1-7) : ");
    scanf("%d", &Day);
    
    switch(Day)
    {
    case 1:
        printf("Sunday");
        break;

    case 2:
        printf("Monday");
        break;

    case 3:
        printf("Tuesday");
        break;
    
    case 4:
        printf("Wednesday");
        break;

    case 5:
        printf("Thrusday");
        break;    

    case 6:
        printf("Friday");
        break;
        
    case 7:
        printf("Saturday");
        break;  

    default:
        printf("Invalid Day!");
        break;
    }
    return 0;
}