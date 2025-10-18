#include <stdio.h>

int main(){
    float price,per,num;
    float twogetone, discount;

    scanf("%f",&price);
    scanf("%f",&per);
    scanf("%f",&num);

    twogetone = (num/3) * 2.0 * price + ((int)num % 3) * price; 
    discount = (price*num) - (price*num*(per/100.0));

    // printf("%f\n",twogetone);
    // printf("%f",discount);

    if (twogetone < discount){
        printf("Buy 2 Get 1\n");
        printf("%.2f",twogetone);
    }
    else if (discount <= twogetone){
        printf("Discount %d%%\n",(int)per);
        printf("%.2f",discount);
    }

    return 0;
}