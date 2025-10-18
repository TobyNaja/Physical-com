#include <stdio.h>

int main(){
    char txt[100];
    int size = 0;

    scanf("%[^\n]",txt);

    while (txt[size] != '\0') {
        size++;
    }

    for (size-1; size >= 0; size--){
        printf("%c",txt[size]);
    }

    return 0;
}