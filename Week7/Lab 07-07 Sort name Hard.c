#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char fname[30], lname[30], mname[30];
    char hold[90];
    int walker, num;
     char line[90];

    scanf("%d", &num);
    getchar();
    char listname[num][90];
    

    for (int i = 0; i < num; i++) {
        scanf(" %[^\n]", line);
        if (isspace((unsigned char)str[i])) {
            new_word = 1;
        } else {
            if (new_word) {
                str[i] = toupper((unsigned char)str[i]);
                new_word = 0;
            } else {
                str[i] = tolower((unsigned char)str[i]);
            }
        }
    }

    for (int i = 1; i < num; i++) {
        strcpy(hold, listname[i]);
        walker = i - 1;
        while (walker >= 0 && strcmp(hold, listname[walker]) < 0) {
            strcpy(listname[walker + 1], listname[walker]);
            walker--;
        }
        strcpy(listname[walker + 1], hold);
    }

    for (int i = 0; i < num; i++) {
        printf("%s", listname[i]);
    }

    return 0;
}