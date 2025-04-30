#include<stdio.h>
typedef struct{
  int rollno;
  char name[20];
  }student;
int main(){
  student s1;
  student *ptr;
  ptr=&s1;
  scanf("%d",&ptr->rollno);
  scanf("%s",ptr->name);
  
  return 0;
  }


