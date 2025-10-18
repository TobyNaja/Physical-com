#include <stdio.h>
#include <ctype.h>

int main(){
    char txt;

    scanf("%c",&txt);

    if (isdigit(txt)){
        printf("number");
    }

    else if (isalpha(txt)){
        if (islower(txt)){
            printf("lowercase");
        }
        else{
            printf("uppercase");
        }
    }

    else{
        printf("error");
    }
    
    return 0;
}