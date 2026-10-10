/* write a program to calcualte the area and the perimeter of a rectangle. take the lenght and bredth as input from user */
#include<stdio.h>
int main()
{
    float length,breadth;
    printf("Enter a length : ");
    scanf("%f",&length);
    printf("Enter a breadth : ");
    scanf("%f",&breadth);
    
    printf("area of rectangle which length is %f and breadth is %f is %f",length,breadth,length*breadth);

    printf("perimeter of a rectangle which is %f and bredth is %f is %f", length, breadth, 2*(length+breadth));
    return 0;
} 
