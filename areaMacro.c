/*Author       : Anna Tony
  Date         : 26-03-2025
  Description  : Define a macro for the value of π (PI = 3.14159) 
                 to calculate the area of a circle and a cylinder. 
                 Use macros for constant values.
  Version      : 1.0  */
#include <stdio.h>

#define PI 3.14159
#define area_CIRCLE(r)(PI*(r)*(r))
#define area_CYLINDER(r,h)(2*PI*(r)*((r)+(h)))

int main(){
    int radius, height;
    printf("Enter the radius of the circle and cylinder: ");
    scanf("%d",&radius);
    printf("Enter the height of the cylinder: ");
    scanf("%d",&height);
    int circle_area = area_CIRCLE(radius);
    int cylinder_area=area_CYLINDER(radius, height);
    printf("Area of the circle: %d\n", circle_area);
    printf("Surface area of the cylinder: %d\n", cylinder_area);

    return 0;
}
