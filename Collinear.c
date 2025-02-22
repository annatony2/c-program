#include <stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3,slope1,slope2;
    printf("\nEnter the first coordinates x1 and y1 :");
    scanf("%d%d",&x1,&y1);
    printf("\nEnter the second coordinates x2 and y2 :");
    scanf("%d%d",&x2,&y2);
    printf("\nEnter the third coordinates x3 and y3 :");
    scanf("%d%d",&x3,&y3);
    slope1=(y2-y1)/(x2-x1);
    slope2=(y3-y2)/(x3-x2);
    if (slope1==slope2){
        printf("\nThe given coordinates are collinear");
    }
    else{
        printf("\nThe given coordinates are not collinear");
    }
    return 0;
}
