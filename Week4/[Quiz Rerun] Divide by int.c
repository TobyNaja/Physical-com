#include <stdio.h>
 
int main() {
    int a, b;

    scanf("%d\n%d", &a, &b);

    float ans = (float)a / (float)b;

    printf("%.2f", ans);
 
    return 0;
}