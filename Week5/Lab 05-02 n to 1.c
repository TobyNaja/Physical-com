#include <stdio.h>

int main(){
    int num,i = 0;

    scanf("%d",&num);
    do{
        printf("%d ",num);
        num--;
    }while (num > i);
    return 0;
    
}