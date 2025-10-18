#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int num;
    double addoil[3],oil[3] = {0, 0, 0};
    char name[3][10];


    scanf("%d",&num);
    scanf("%s %s %s",name[0],name[1],name[2]);
    for (int i = 0; i < num; i++){
        scanf("%lf %lf %lf",&addoil[0],&addoil[1],&addoil[2]);
        oil[0] += addoil[0];
        oil[1] += addoil[1];
        oil[2] += addoil[2];
    }
    for (int i = 0; i < 3; i++){
        int refills;
        if (strcmp(name[i], "Nano") == 0){
            refills = (int)ceil(oil[i]/6.6);
        } else {
            refills = (int)ceil(oil[i]/5.5);
        }
        printf("%s: %d refills\n", name[i], refills);
    }
    return 0;
}