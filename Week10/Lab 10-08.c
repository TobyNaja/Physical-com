#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char txt[2000];

    scanf("%[^\n]",txt);

    int first = 1;
    int num = strlen(txt);
    for (int i = 2;i < num; i++){
        if (tolower(txt[i-2]) == 'c' && tolower(txt[i-1]) == 'a' && tolower(txt[i]) == 't'){
            if (!first) {
                printf(", ");
            }
            printf("%d",i-2);
            first = 0;
        }
    }
    return 0;
}