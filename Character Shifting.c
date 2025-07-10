#include <stdio.h>

int main(){
    char chars1[1],chars2[1],chars3[1],chars4[1],chars5[1];

    scanf(" %c", &chars1[0]);
    scanf(" %c", &chars2[0]);
    scanf(" %c", &chars3[0]);
    scanf(" %c", &chars4[0]);
    scanf(" %c", &chars5[0]);
    
    printf("%c\n", chars1[0] + 1);
    printf("%c\n", chars2[0]);
    printf("%c\n", chars3[0] + 1);
    printf("%c\n", chars4[0]);
    printf("%c\n", chars5[0] + 1);

    return 0;
}