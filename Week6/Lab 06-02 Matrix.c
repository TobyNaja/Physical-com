#include <stdio.h>

int main(){
    double list1[3][3],list2[3][3],ans[3][3];

    for (int i = 0; i < 3; i++){
            scanf("%lf %lf %lf",&list1[i][0],&list1[i][1],&list1[i][2]);
    }
    for (int i = 0; i < 3; i++){
            scanf("%lf %lf %lf",&list2[i][0],&list2[i][1],&list2[i][2]);
    }
    

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            ans[i][j] = 0;
            for (int k = 0; k < 3; k++){
                ans[i][j] += list1[i][k] * list2[k][j];
            }
        }
    }
    printf("A x B\n");
    for (int i = 0; i < 3; i++){
            printf("%.2lf %.2lf %.2lf\n",ans[i][0],ans[i][1],ans[i][2]);
    }
    return 0;
}