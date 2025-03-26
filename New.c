/*Author       : Anna Tony
  Date         : 26-03-2025
  Description  : 
  Version      : 1.0  */
#include <stdio.h>

#define SWAP(a, b) { int temp=a;a=b;b=temp; }

int main(){
    int x, y;
    printf("Enter two integers : ");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    printf("\nBefore swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    SWAP(x, y);

    printf("\nAfter swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

#include <stdio.h>

// Defining macros for constants
#define PI 3.14159
#define AREA_CIRCLE(r) (PI * (r) * (r))
#define AREA_CYLINDER(r, h) (2 * PI * (r) * ((r) + (h)))

int main() {
    double radius, height;

    // Input radius and height
    printf("Enter the radius of the circle and cylinder: ");
    scanf("%lf", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate areas using macros
    double circle_area = AREA_CIRCLE(radius);
    double cylinder_area = AREA_CYLINDER(radius, height);

    // Display results
    printf("Area of the circle: %.2lf\n", circle_area);
    printf("Surface area of the cylinder: %.2lf\n", cylinder_area);

    return 0;
}