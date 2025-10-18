#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char fname[30], lname[30];
    char listname[20][61],hold[61];;
    int walker;
    for (int i = 0; i < 20;i++){
        scanf("%s %s", fname, lname);
        fname[0] = toupper(fname[0]);
        for (int i = 1; fname[i] != '\0'; i++) {
            fname[i] = tolower(fname[i]);
        }
        lname[0] = toupper(lname[0]);
        for (int i = 1; lname[i] != '\0'; i++) {
            lname[i] = tolower(lname[i]);
        }
        sprintf(listname[i], "%s %s\n", fname, lname);
    }

    for (int i = 1; i < 21; i++) {
        strcpy(hold, listname[i]);
        walker = i - 1;

        while (walker >= 0 && strcmp(hold, listname[walker]) < 0){
            strcpy(listname[walker + 1], listname[walker]);
            walker--;
        }
        strcpy(listname[walker + 1], hold);
    }

    for (int i = 0; i < 21; i++) {
        printf("%s", listname[i]);
    }
    
    return 0;
}