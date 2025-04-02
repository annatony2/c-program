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
struct Student {
    char name[50];
    int rollNo;
    float marks[3],
    float total;
    float average;
};

int main() {
    int n, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].rollNo);
        s[i].total = 0;
        for (j = 0; j < 3; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].average = s[i].total / 3.0;
    }
    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].rollNo);
        printf("Total Marks: %.2f\n", s[i].total);
        printf("Average Marks: %.2f\n", s[i].average);
    }

    return 0;
}