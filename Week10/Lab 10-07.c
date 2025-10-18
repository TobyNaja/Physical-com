#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
int main(){
    char txt[100];
    int check = 0,check2 = 0;
    scanf("%s",txt);
    int num = strlen(txt);
    while (check == 0){
        check = 1;
        for (int i = 1; i < num;i++){
            if (txt[i-1] == txt[i]){
                for (int j = i - 1; j < num - 1; j++) {
                    txt[j] = txt[j + 2];
                }
                check2 = 1;
                num -= 2;
                check = 0;
                break;
            }
        }
        if (check == 1){
            break;
        }
        printf("%s",txt);
        printf("\n");
        // check = 0;
    }
    if (check2 == 0){
        printf("%s",txt);
    }

    return 0;
 
}