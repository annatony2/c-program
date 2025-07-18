#include <stdio.h>
struct polynomial{
int coeff;
int expo;
};
int main(){
  struct polynomial poly1[3];
  struct polynomial poly2[3];
  struct polynomial result[6];
  int n1,n2,i=0,j=0,k=0;
  printf("enter no of terms in polynomial1: ");
  scanf("%d", &n1);
  printf("enter terms in descending order  of exponent. \n");
  for(int i=0;i<n1;i++){
    printf("enter coefficient and exponent of term %d :",i+1);
    scanf("%d%d",&poly1[i].coeff,&poly1[i].expo);
  }
  printf("enter no of terms in polynomial2: ");
  scanf("%d", &n2);
  printf("enter terms in descending order  of exponent: \n");
  for(int j=0;j<n2;j++){
    printf("enter coefficient and exponent of term %d ",j+1);
    scanf("%d%d",&poly2[j].coeff,&poly2[j].expo);
  }
  while (i<n1 && j<n2){
    if (poly1[i].expo==poly2[j].expo){
      result[k].coeff=poly1[i].coeff+poly2[j].coeff;
      result[k].expo=poly1[i].expo;
      i++,j++,k++;
    }
    else if (poly1[i].expo >poly2[j].expo){
       result[k].coeff=poly1[i].coeff;
       result[k].expo=poly1[i].expo;
       i++,k++;
   }
   else{
     result[k].coeff=poly2[j].coeff;
     result[k].expo=poly2[j].expo;
     j++,k++;
   }
 }
 while (i<n1){
  result[k]=poly1[i];
  i++,k++;
 }
 while (j<n2){
  result[k]=poly2[j];
  j++,k++;
 }
 for (int i=0;i<k;i++){
  printf("%d x^%d ",result[i].coeff, result[i].expo);
  if (i != k - 1) {
    printf("+ ");
  }  

 }
 return 0;
 }