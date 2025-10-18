#include <stdio.h>

int main(){
    float bank, cash,money;
    int crash = 0;
    scanf("%f", &bank);
    scanf("%f", &cash);

    while(1){
        char a;
        float money;
        scanf(" %c",&a);
        if (a == 'E'){
            scanf(" %c",&a);
            break;
        }
        if (crash == 3){
            break;
        }
        scanf("%f",&money);

        if (a == 'D'){
            if (cash >= money) {
                cash -= money;
                bank += money;
                crash = 0;
            } 
            else {
                crash++;
            }
        }
        else if (a == 'W'){
            if (bank >= money) {
                bank -= money;
                cash += money;
                crash = 0;
            }
            else {
                crash++;
            }
        }
    }
    printf("%.2f\n", bank);
    printf("%.2f\n", cash);

    return 0;
}