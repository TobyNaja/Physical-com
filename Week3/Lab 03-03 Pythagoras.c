#include <stdio.h>
#include <math.h>
 
int main() {
    float a, b, c;
 
    scanf("%f", &a);
    scanf("%f", &b);
 
    c = sqrt(pow(a, 2) + pow(b, 2));
 
    printf("%.2f\n", c);
 
    return 0;
}