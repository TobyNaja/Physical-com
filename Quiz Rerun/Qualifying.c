#include <stdio.h>
#include <string.h>

int main() {
    double time1, time2, time3, temp;
    char name1[36], name2[36], name3[36], tempName[36];

    scanf("%lf %[^\n]", &time1, name1);
    getchar();
    scanf("%lf %[^\n]", &time2, name2);
    getchar();
    scanf("%lf %[^\n]", &time3, name3);

    if (time1 > time2) {
        temp = time1; time1 = time2; time2 = temp;
        strcpy(tempName, name1); strcpy(name1, name2); strcpy(name2, tempName);
    }
    if (time1 > time3) {
        temp = time1; time1 = time3; time3 = temp;
        strcpy(tempName, name1); strcpy(name1, name3); strcpy(name3, tempName);
    }
    if (time2 > time3) {
        temp = time2; time2 = time3; time3 = temp;
        strcpy(tempName, name2); strcpy(name2, name3); strcpy(name3, tempName);
    }

    printf("%s is Fastest : %.3lf ", name1, time1);

    return 0;
}