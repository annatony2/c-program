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

// Define a structure to store student details struct Student { char name[50]; int rollNo; float cgpa; };

int main() { struct Student s;

// Input student details
printf("Enter student name: ");
scanf("%49s", s.name);  // Limiting input to prevent buffer overflow

printf("Enter roll number: ");
scanf("%d", &s.rollNo);

printf("Enter CGPA: ");
scanf("%f", &s.cgpa);

// Display student details
printf("\nStudent Details:\n");
printf("Name: %s\n", s.name);
printf("Roll No: %d\n", s.rollNo);
printf("CGPA: %.2f\n", s.cgpa);

return 0;

}

