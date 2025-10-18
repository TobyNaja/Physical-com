#include <stdio.h>

int main(){
    char tae1[15], tae2[15];
    int day1[8],day2[8],sum1 = 0, sum2 = 0, avg1, avg2,x1 = 0,x2 = 0,equal = 0;

    scanf("%[^\n]",tae1);
    scanf("%d %d %d %d %d %d %d",&day1[0],&day1[1],&day1[2],&day1[3],&day1[4],&day1[5],&day1[6]);
    scanf(" %[^\n]",tae2);
    scanf("%d %d %d %d %d %d %d",&day2[0],&day2[1],&day2[2],&day2[3],&day2[4],&day2[5],&day2[6]);

    for (int i = 0; i < 7;i++){
        sum1 += day1[i];
        sum2 += day2[i];
        if (day1[i] == day2[i]){
            equal++;
        }
        else if(day1[i] < day2[i]){
            x1++;
        }
        else{
            x2++;
        }
    }
    avg1 = sum1/7;
    avg2 = sum2/7;

    printf("%s: %d minutes, average %d minutes/day\n",tae1,sum1,avg1);
    printf("%s: %d minutes, average %d minutes/day\n",tae2,sum2,avg2);
    printf("Faster days - %s: %d, %s: %d, Equal: %d\n",tae1,x1,tae2,x2,equal);



}