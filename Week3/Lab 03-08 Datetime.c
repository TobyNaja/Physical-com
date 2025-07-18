#include <stdio.h>
 
int main() {
    int num, sec, min, hour, day;
 
    scanf("%d", &num);
 
    day = num / 86400;
    hour = (num % 86400) / 3600;
    min = (num % 3600) / 60;
    sec = num % 60;
 
    printf("%d s = %d d %d h %d m %d s\n", num, day, hour, min, sec);
 
    return 0;
}