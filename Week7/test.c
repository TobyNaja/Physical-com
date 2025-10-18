#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void Perimeter(double a, double b){
    double c = sqrt(pow(a,2) + pow(b,2));
    printf("Perimeter: %.2lf\n",a+b+c);
}

void area(double a, double b){
    printf("Area: %.2lf",0.5*a*b);
}

int main() {
    double a,b ;
    scanf("%lf %lf",&a,&b);
    Perimeter(a,b);
    area(a,b);

    return 0;

}