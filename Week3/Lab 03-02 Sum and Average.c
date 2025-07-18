#include <stdio.h>
 
int main(){
    float num1,num2,num3,num4,sum1,avg;
 
    scanf("%f",&num1);
    scanf("%f",&num2);
    scanf("%f",&num3);
    scanf("%f",&num4);
     
    sum1 = num1 + num2 + num3 + num4;
    avg = sum1/4;
 
    printf("Summation is %.2f\n",sum1);
    printf("Average is %.3f",avg);
 
    return 0;
}