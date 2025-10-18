#include <stdio.h>
#include <math.h>


int main(){
    double h,g = 9.81,radius;
    int degree,u;

    scanf("%d",&degree);
    scanf("%d",&u);
    radius = (degree * 3.141592653589793)/180;

    h = (pow(u,2)*pow(sin(radius),2))/(2*g);

    printf("theta (degree) : %d\n",degree);
    printf("u (m/s) : %d\n",u);
    printf("h (m) : %.4lf",h);

    return 0;
}