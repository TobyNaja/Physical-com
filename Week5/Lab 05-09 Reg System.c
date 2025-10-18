#include <stdio.h>

int main(){
    int Age,Height,Weight,a1 = 0,a2 = 0,a3 = 0,a4 = 0,a5= 0;
    float a6= 0,a7= 0;

    for (int i = 0; i < 50 ;i++){
        scanf("%d %d %d",&Age,&Height,&Weight);

        if (Age >= 20 && Height >= 160){
            a1++;
        }

        if (Age < 20 && (Height <= 180 || Weight >= 60)){
            a2++;
        }
        if (Age >= 30 && Weight >= 40 && Weight <= 80){
            a3++;
        }
        if (Age < 40 && (Weight < 85 || Height <= 200)){
            a4++;
        }
        a5 += Age;
        a6 += Height;
        a7 += Weight;
    }
    a5 = a5/50;
    a6 = a6/50.0;
    a7 = a7/50.0;

    printf("Age >= 20 and Height >= 160: %d\n",a1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n",a2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n",a3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n",a4);
    printf("Average Age: %d\n",a5);
    printf("Average Height: %.2f\n",a6);
    printf("Average Weight: %.2f\n",a7);
    return 0;
}