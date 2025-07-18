#include <stdio.h>

int main(){
    float weight, hight,BMI;

    scanf("%f",&hight);
    scanf("%f",&weight);

    hight = hight/100;
    BMI = weight/(hight*hight);

    printf("%f",BMI);
    return 0;
    
}