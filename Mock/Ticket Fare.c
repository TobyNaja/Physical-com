#include <stdio.h>

int main(){
    unsigned int N,a,b,c,d,e,f,g,money = 0;
    scanf("%u %u %u %u %u %u %u %u",&N,&a,&b,&c,&d,&e,&f,&g);

    if (g-f > N)printf("Error");
    if (g-f <= a){
        money += b;
    }
    else{
        money += b;
        if (g-f <= c+a) money += (c+a-g) * d;
        else{
            money += (c * d);
            // printf("test 1 : %d\n",(c * d));
            money += (g - (f+c+a)) * e;
            // printf("test 2 : %d\n",(g - (f+c+a)) * 1);
        }
        // else{
        //     printf("Error");
        //     return 0;
        // }
    }
    printf("%u",money);

}