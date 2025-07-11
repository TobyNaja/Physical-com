#include <stdio.h>

int main() {

    char a, b, c, d, e;

    scanf(" %c %c %c %c %c", &a, &b, &c, &d, &e);
    
    printf("%-8c", a);
    printf("%c%-80c",a,b);
    printf("%c%c%-79c",a,b,c);
    printf("%c%c%c%-78c",a,b,c,d);
    printf("%c%c%c%c%c",a,b,c,d,e);

    return 0;
}