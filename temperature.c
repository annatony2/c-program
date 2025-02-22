/*Author       : Anna Tony
  Date         : 22-02-2025
  Description  : read temperature in centigrade and display a suitable
                 message according to temperature state below
  Version      : 1.0  */
#include <stdio.h>
int main(){
    int temperature;
    printf("\nEnter the temperature (C):");
    scanf("%d",&temperature);
    if (temperature<0){
        printf("\nFreezing weather");
    }
    else if(temperature>=0&&temperature<=10){
        printf("\nVery Cold Weather");
    }
    else if(temperature>=10&&temperature<=20){
          printf("\nCold Weather");
    }
    else if(temperature>=20&&temperature<=30){
        printf("\nNormal Temperature");
    }
    else if(temperature>=30&&temperature<=40){
        printf("\nHot");
    }
    else{
        printf("\nVery Hot");
    }
    printf("\n");
    return 0;
}
