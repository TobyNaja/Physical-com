#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);

    if (ch == 's' || ch == 'S'){
        printf("Soft");
    }
    else if (ch == 'm'|| ch == 'M'){
        printf("Medium");
    }
    else if (ch == 'h' || ch == 'H'){
        printf("Hard");
    }
    else if (ch == 'i' || ch == 'I'){
        printf("Intermediate");
    }
    else if (ch == 'w'|| ch == 'W'){
        printf("Wet");
    }

    return 0;
}