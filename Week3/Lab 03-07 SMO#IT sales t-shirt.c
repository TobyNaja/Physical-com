#include <stdio.h>
 
int main(){
    float price,per,num,price1;
    scanf("%f",&price);
    scanf("%f",&per);
    scanf("%f",&num);
 
    price1 = (price * num) - (price * num * (per/100));
    printf("%.2f",price1);
 
    return 0;
}