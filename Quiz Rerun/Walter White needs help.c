#include <stdio.h>

int main(){
    int num1,num2,sum = 0;


    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("pass : ");
    if (num1 < num2){
        for (int i = num1 ; i <= num2; i++){
            if (i%2 == 0){
                printf("%d ",i);
                sum += i;
            }
        }
    }
    else{
        for (int i = num1 ; i >= num2; i--){
            if (i%2 == 0){
                printf("%d ",i);
                sum += i;
            }
        }
    }
    printf("\n");
    printf("Sum : %d",sum);

    return 0;
}