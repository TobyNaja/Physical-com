#include <stdio.h>
 
int main(){
    char txt1[30];
    char txt2[30];
    char txt3[30];
    char txt4[30];
 
    scanf("%s",txt1);
    scanf("%s",txt2);
    scanf("%s",txt3);
    scanf("%s",txt4);
 
    printf("String 1: %.3s\n", txt1);
    printf("String 2: %.4s\n", txt2);
    printf("String 3: %.5s\n", txt3);
    printf("String 4: %.6s\n", txt4);
}