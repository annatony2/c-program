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
#include<stdio.h>
#define MAX 10
typedef struct{
    int rollno;
    char name[20];
    int m[3];
    int totalMarks;
}Student;
//Function to read the student details
void read(Student s[], int n){
    for(int i=0;i<n;i++){
        printf("\nEnter the Roll No:");
        scanf("%d",&s[i].rollno);
        printf("\nEnter the name of the student");
        scanf("%s", s[i].name);
        printf("\nEnter the marks:");
        scanf("%d%d%d",&s[i].m[0],&s[i].m[1],&s[i].m[2]);

    }
}
//Function to compute the total marks
void calculateTotal(Student s[],int n){
    for(int i=0;i<n;i++){
        s[i].totalMarks = s[i].m[0]+s[i].m[1]+s[i].m[2];
    }
}
//Function to create the rank list
void prepareRankList(Student s[], int n){
    Student temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(s[j].totalMarks<s[j+1].totalMarks){
                //swap students
                temp= s[j];
                s[j] = s[j+1];
                s[j+1]=temp;
            }
        }
    }
}
//Function to print the RankList
void printRankList(Student s[], int n){
    printf("\nRank\tRollNumber\tName\tM1\tM2\tM3\tTotalMarks\n");
    for(int i=0;i<n;i++){
        printf("%d\t%d\t\t%s\t%d\t%d\t%d\t%d\n", i+1, s[i].rollno,s[i].name,s[i].m[0],s[i].m[1],s[i].m[2],s[i].totalMarks);

    }
}

int main(){
    Student s[MAX];
    int n;
    printf("\nEnter the number of students(MAx:10)");
    scanf("%d",&n);
    read(s,n);
    calculateTotal(s,n);
    prepareRankList(s,n);
    printRankList(s,n);
    return 0;
}