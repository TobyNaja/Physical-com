#include <stdio.h>

int main(){
    int check, num,safe,count = 0;
    double dis;

    scanf("%d",&check);
    scanf("%lf",&dis);
    scanf("%d",&num);
    scanf("%d",&safe);

    if (check == 0){
        count++;
    }
    if (dis >= 1.0){
        count++;
    }
    if (num <= 2){
        count++;
    }
    if (num-safe < 2){
        count++;
    }

    if (count == 0){
        printf("DRS allowed");
    }
    else{
        printf("DRS not allowed %d",count);
    }

    return 0;
}