#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,value,value1,value2,squareRoot;
  printf("Enter a coefficient a,b,c ");
  scanf("%d%d%d",&a,&b,&c);
  value=b*b-4*a*c;
  squareRoot=sqrt(value);
  value1=-b+squareRoot/2*a;
  value2=-b-squareRoot/2*a;
  printf("the roots of the regarding the quadratic equation related to the entered coefficents are %d and %d",value1,value2);
  return 0;
  }
  
  
