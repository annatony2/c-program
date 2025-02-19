#include<stdio.h>
#include<string.h>
int main(){
  char str1[20],str2[20];
  printf("Enter a string:");
  fgets(str1,sizeof(str1),stdin);
  printf("Enter a second string:");
  fgets(str2,sizeof(str2),stdin);
  if (strcmp(str1,str2)==0){
  printf("Strings are equal!");
  }
  else{
  printf("Strings are not Equal!");
  }
  return 0;
}
