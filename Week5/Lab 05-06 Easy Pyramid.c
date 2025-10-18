#include <stdio.h>
 
int main(){
    int start,stop;
    scanf("%d",&start);
    stop = start*2-1;
    int a = start;
    int b = start;
    for (int i = 0; i < start; i++){
        for(int j = 1; j <= stop; j++){
            if (j == start || (j >= a && j <= b)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        a--;
        b++;
        printf("\n");
    }
    return 0;
}