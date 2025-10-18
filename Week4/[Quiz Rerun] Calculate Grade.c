#include <stdio.h>

int main() {
    char info[40];
    int g1, g2, g3, g4, g5, g6;

    scanf("%[^\n]", &info);
    scanf("%d %d %d %d %d %d", &g1, &g2, &g3, &g4, &g5, &g6);

    float grade = ((float)g1 + (float)g2 + (float)g3 + (float)g4 + (float)g5 + (float)g6) / 6;

    printf("Grade announcement 1/2568: %s\nGPS/GPA: %.2f", info, grade);

    return 0;
}