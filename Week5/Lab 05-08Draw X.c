#include <stdio.h>

int main(){
    int right = 0, left,num;
    scanf("%d",&num);
    left = num-1;
    for (int i = 0; i < num ; i++){
        for (int j = 0; j < num ; j++){
            if (j == left || j == right){
                printf("-");
            }
            else{
                printf("#");
            }
        }
        right++;
        left--;
        printf("\n");
    }
    return 0;
}