#include <stdio.h>

int main(){
    char txt[200];
    char cer[28]  = "HSOJLKDECNMRQPYXBAIWGZVFUT";
    char cer2[28] = "hsojlkdecnmrqpyxbaiwgzvfut";


    scanf("%[^\n]",txt);
    int k = 0;
    while (txt[k] != '\0'){
        int count = 0;
        for (int i = 0; i < 26; i++){
            if (txt[k] == cer[i]){
                printf("%c",cer[(i+26-5)%26]);
                count = 1;
                break;
            }
            else if (txt[k] == cer2[i]){
                printf("%c",cer2[(i+26-5)%26]);
                count = 1;
                break;
            }
            else{
                count = 0;
            }
        }
        if (count == 0){
            printf(" ");
        }
        k++;
    }
    return 0;
}