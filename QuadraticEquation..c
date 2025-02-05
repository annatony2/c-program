#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,value,value1,value2,squareRoot;
  float value3;
  printf("Enter a coefficient a,b,c : ");
  scanf("%d%d%d",&a,&b,&c);
  value=b*b-4*a*c;
  squareRoot=sqrt(value);
  value3=squareRoot/2*a;
  value1=-b+value3;
  value2=-b-value3;
  printf("The roots of the regarding the quadratic equation related to the entered coeffiecents are %d and %d",value1,value2);
  return 0;
  }
  
  
