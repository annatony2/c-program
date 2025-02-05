#include<stdio.h>
int main(){
  char value;
  printf("Enter a alphabet:");
  scanf("%c",&value);
  printf("It's ASCII value:%d",value);
  value=value+32;
  printf("\nOpposite case: %c\n",value);
  printf("It's ASCII value:%d",value);
  return 0;
}
