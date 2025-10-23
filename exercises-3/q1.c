// Written by Daniel Harrington
// This program takes the lengths of sides of a triangle and outputs the area and perimeter

#include <stdio.h>
#include <math.h>

double CalculatePerimeter(double x, double y, double z) {
    return x + y + z;
}

double CalculateArea(double x, double y, double z) {
    double s = 0.5*CalculatePerimeter(x, y, z);
    return sqrt(s*(s-x)*(s-y)*(s-z));
}

int main(void)
{
    double a = 0;
    double b = 0;
    double c = 0;

    printf("Please enter the sides of the triangle.\n");

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    double perimeter = CalculatePerimeter(a, b, c);
    double area = CalculateArea(a, b, c);

    printf("The Perimeter is %lf\n", perimeter);
    printf("The Area is %lf\n", area);
    
    return 0;
}