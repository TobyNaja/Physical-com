#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char txt[10] = "AB",txt2[10] = "BA";

    if (strcmp(txt,txt2) < 0){
        printf("AAAA");
    }
    else{
        printf("BBBB");
    }

    return 0;
}