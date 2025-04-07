/*Author       : Anna Tony
  Date         : 07-0-2025
  Description  : Develop a program to calculate the total and average marks of a group of students
                 using an array of structures. Include student name, roll number, and marks in three subjects.
  Version      : 1.0  */
#include <stdio.h>
struct Student {
    char name[50];
    int rollNo;
    float marks[3],
    float total;
    float average;
};

int main() {
    int n,i,j;
    printf("Enter the number of students: ");
    scanf("%d",&n);

    struct Student s[n];
    for (i=0;i<n;i++){
        printf("\nEnter details for Student %d\n",i+1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].rollNo);
        s[i].total = 0;
        for (j = 0; j < 3; j++) {
            printf("Enter marks for subject %d: ",j+1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].average = s[i].total / 3;
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
