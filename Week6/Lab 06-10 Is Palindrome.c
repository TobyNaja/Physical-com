#include <stdio.h>

int main(){
    char txt[100];
    int size = 0;
    

    scanf("%[^\n]",txt);

    while (txt[size] != '\0'){
        size++;
    }
    char retxt[size+1];
    int i = 0;
    for (int j = size - 1; j >= 0;j--){
        retxt[i] = txt[j];
        i++;
    }
    int is_palindrome = 1;
    for (int i = 0; i < size; i++) {
        if (txt[i] != retxt[i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("It is Palindrome.\n");
    } else {
        printf("It is not Palindrome.\n");
    }

    return 0;
}