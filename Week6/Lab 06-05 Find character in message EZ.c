#include <stdio.h>

int main(){
    char txt[300],cha;
    int count = 0,i = 0,position[300];

    
    scanf("%[^\n]",txt);
    scanf(" %c",&cha);
    while (txt[i] != '\0'){
        if (txt[i] == cha || txt[i] == cha + 32 || txt[i] == cha - 32){
            position[count] = i + 1;
            count++;
        }
        i++;
    }
    if (count > 0){
        printf("There is/are %d \"%c\" in the above sentences.\n",count,cha);
        int k = 0;
        printf("Position: ");
        for (int k = 0; k < count; k++) {
            if (k > 0) printf(", ");
            printf("%d", position[k]);
        }
    }
    else{
        printf("Not found.");
    }

    return 0;
}