#include <stdio.h>
#include <math.h>

int main(){
    int a = 5, b = 2;
    float result;

    result = a / b;     
    printf("%f\n", result);    // integer division → result = 2.0
    result = (float)a / b;    // cast → result = 2.5

    printf("%f\n", result);

}