#include <stdio.h>

int main(){
    double list1[3][3];
    char check = 'T';

    for (int i = 0; i < 3; i++){
            scanf("%lf %lf %lf",&list1[i][0],&list1[i][1],&list1[i][2]);
    }

    double c = list1[0][0];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i == j && c == list1[i][j]){
                check = 'T';
            }
            else if (i != j && list1[i][j] == 0){
                check = 'T';
            }
            else{
                check = 'F';
                break;
            }
        }
    }
    if (check == 'F'){
        printf("This is not a scalar matrix");
    }
    else{
        printf("This is a scalar matrix");
    }
    return 0;
}