#include<stdio.h>
int main(){
  int age;
  printf("Enter your Age:");
  scanf("%d",&age);
  if (age>=18){
    printf("Congratulations! Eligible to vote");
  }
  else{
    printf("Sorry you are not eligible to vote");
  }
  return 0;
}
