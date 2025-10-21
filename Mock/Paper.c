#include <stdio.h>
#include <math.h>

int main(){
    char a1, a2;
    int pa1,pa2;
    scanf(" %c%d",&a1,&pa1);
    scanf(" %c%d",&a2,&pa2);

    int pa3 = pa2-pa1;
    int ans = pow(2,pa3);

    printf("%d",ans);
    return 0;
}