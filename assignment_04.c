/*Write a program to calculate the area and circumfrence of a circle. take the radius as input from the user.*/
#include<stdio.h>
int main()
{
    float radius,area,circumference;
    printf ("enter the radius of the circle : ");
    scanf (" %f" ,& radius );
    area =3.14159*radius*radius;
    printf (" area of the circle is : %f\n ",area );
    circumference = 2.0*3.14159*radius;
    printf("circumference of circle which radius is %f is %f",radius,circumference);
    return 0;;
}