#include <stdio.h>

int main() {
    int quacks;
    scanf("%d", &quacks);

    if (quacks == 0) {
        printf("Duck Type: Silent Duck\n");
    } else if (quacks >= 1 && quacks <= 10) {
        printf("Duck Type: Chill Duck\n");
    } else if (quacks >= 11 && quacks <= 50) {
        printf("Duck Type: Happy Duck\n");
    } else if (quacks > 50) {
        printf("Duck Type: Talkative Duck\n");
    } else {
        printf("Error\n");
    }

    return 0;
}