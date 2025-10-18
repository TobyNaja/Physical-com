#include <stdio.h>
#include <ctype.h>


int main(){
    char txt1[102],txt2[102];
    int count1 = 0,count2 = 0;

    scanf("%[^\n]",txt1);
    scanf(" %[^\n]",txt2);

    for (int i=0;txt1[i] != '\0';i++){
        count1++;
        if (islower(txt1[i])){
            txt1[i] = toupper(txt1[i]);
        }
        else{
            txt1[i] = tolower(txt1[i]);
        }
    }
    for (int i=0;txt2[i] != '\0';i++){
        count2++;
        if (islower(txt2[i])){
            txt2[i] = toupper(txt2[i]);
        }
        else{
            txt2[i] = tolower(txt2[i]);
        }
    }
    printf("*** Results ***\n");
    for (int i=0;txt1[i] != '\0';i++){
        printf("%c",txt1[i]);
    }
    printf("\n");
    for (int i=0;txt2[i] != '\0';i++){
        printf("%c",txt2[i]);
    }
    printf("\n");
    printf("***************\n");
    if (count1 == count2){
        for (int i=0;i<count1;i++){
            txt1[i] = tolower(txt1[i]);
            txt2[i] = tolower(txt2[i]);
            if (txt1[i] != txt2[i]){
                printf("Both strings are not the same.\n");
                return 0;
            }
        }
    }
    else{
        printf("Both strings are not the same.\n");
        return 0;
    }
    printf("Both strings are the same.\n");
    return 0;
}