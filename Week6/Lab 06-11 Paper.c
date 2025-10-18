#include <stdio.h>
#include <math.h>

int main() {
    char c1, c2;
    int num1, num2;
    scanf("%c%d", &c1, &num1);
    scanf(" %c%d", &c2, &num2);
    int ans = num2 - num1;
    ans = pow(2, ans);
    printf("%d\n", ans);
    return 0;
}