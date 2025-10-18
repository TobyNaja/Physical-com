#include <stdio.h>

int main(){
    char sex ,bi;
    float weight ,val,per;
    int amount,hour;

    scanf(" %c",&sex);
    scanf(" %f",&weight);
    scanf(" %c",&bi);
    scanf(" %f",&val);
    scanf(" %f",&per);
    scanf(" %d",&amount);
    scanf(" %d",&hour);

    float x = amount * ((per * val) / 100.0);
    // printf("%f",x);
    if (sex == 'M'){
        x = (x/(weight * 0.68 * 10) * 1000) - (hour * 15);
    }
    else {
        x = (x/(weight * 0.55 * 10) * 1000) - (hour * 15);
    }
    if (bi == 'Y'){
        if (x <= 50){
            printf("Safe\n");
        }
        else{
            printf("Not Safe\n");
        }
    }
    else{
        printf("Not Safe\n");
    }

    return 0;

}