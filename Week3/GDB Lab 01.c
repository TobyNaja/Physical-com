#include "stdio.h"

int main() {
    int a = 17, b = 25, c = 50, d = 10;

    d = a++ + b++ + c++;
    d = ++a + ++b + ++c;

    return 0;
}
duble