/*Author       : Anna Tony
  Date         : 09-04-2025
  Version      : 1.0  */
#include<stdio.h>
void readFile(FILE *fp){
  int num;
  while(fscanf(fp,"%d",&num)==1);{
    printf("%d",num);
  }
  fclose(fp);
}
int main(){
  FILE  *fp1,*fp2,*fp3;
  fp1 = fopen("number.txt","r");
  fp2= fopen("odd.txt","w");
  fp3= fopen("even.txt","w");
  int num;
  while(fscanf(fp1,"%d",&num)==1){
     if (num%2==0){
                fprintf(fp3,"%d\t",num);
            }else{
                fprintf(fp2,"%d\t",num);
     }
  }
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
 printf("\nThe first file contents:");
fp1=fopen("number.txt","r");
readFile(fp1);
printf("\nEven numbers:");
fp2=fopen("even.txt","r");
readFile(fp2);
printf("\nOdd numbers:");
fp3=fopen("odd.txt","r");
readFile(fp3);
return 0;
 
  }
