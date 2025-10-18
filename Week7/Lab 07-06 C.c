#include <stdio.h>
#include <math.h>

double Standard(double x, double y){
    double c;
    c = sqrt(x*x + y*y);
    return c;
}

int main(){
    double x , y;
    double ans;
    scanf("%lf %lf",&x,&y);
    ans =  Standard(x,y);

    printf("sqrt(%.0lf^2+%.0lf^2)=%.2lf",x,y,ans);

    return 0;
}