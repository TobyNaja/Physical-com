#include <stdio.h>
#include <ctype.h>

int main(){
    int num;
    
    scanf("%d",&num);
    char cha[num];

    for (int i = 0; i < num;i++){
        scanf(" %c",&cha[i]);
        cha[i] = tolower(cha[i]);
    }
    for (int i = 0; i < num ;i++){
        if (cha[i] != 0){
            int count = 1;
            for (int j = i + 1; j < num ;j++){
                if (cha[i] == cha[j]){
                    count++;
                    cha[j] = 0;
                }
            }
            printf("%c: %d\n", cha[i], count);
        }
    }
    return 0;
}