#include <stdio.h>
#include <math.h>
 
int main(){
    float price,d,h,v,vm;
 
    scanf("%f",&price);
    scanf("%f",&d);
    scanf("%f",&h);
 
    v = h *3.14159265359*(pow((d/2),2));
    vm = price/v;
    printf("Volume : %.2fml\n",v);
    printf("Baht/ml : %.4f",vm);
 
    return 0;
}