#include <stdio.h>

int main(){
    float bank,cash,money;
    char action;
    int error = 0;
    
    scanf("%f",&bank);
    scanf("%f",&cash);

    while (1)
    {
        scanf(" %c",&action);
        if (action == 'E'){
            scanf(" %c",&action);
            if (action == 'D'){
                break;
            }
        }
        if (error == 3){
            break;
        }
        
        if (action == 'D'){
            scanf("%f",&money);
            if(cash >= money){
                bank += money;
                cash -= money;
                error = 0;
            }
            else{
                error += 1;
            }
        }
        if (action == 'W'){
            scanf("%f",&money);
            if(bank >= money){
                cash += money;
                bank -= money;
                error = 0;
            }
            else{
                error += 1;
            }
        }
    }
    printf("%.2f\n",bank);
    printf("%.2f",cash);
    
}