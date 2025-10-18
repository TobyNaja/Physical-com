#include <stdio.h>
#include <string.h>

int main(){
    char con[4];
    int num1,num2,num3,num4,num5;
    int max, min;
    scanf("%s",con);
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);

    if (strcmp(con,"MAX") == 0){
        max = num1;
        if (max < num2) max = num2;
        if (max < num3) max = num3;
        if (max < num4) max = num4;
        if (max < num5) max = num5;
        printf("MAX : %d",max);
    }

    else if (strcmp(con,"MIN") == 0){
        min = num1;
        if (min > num2) min = num2; 
        if (min > num3) min = num3; 
        if (min > num4) min = num4; 
        if (min > num5) min = num5;
        printf("MIN : %d",min);
    }
    return 0;
}