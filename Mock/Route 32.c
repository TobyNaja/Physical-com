#include <stdio.h>

int main(){
    double kilo;
    scanf("%lf",&kilo);
    
    if(kilo >= 0 && kilo < 48.697)printf("Ayutthaya");
    else if(kilo >= 48.697 && kilo < 66.456)printf("Ang Thong");
    else if(kilo >= 66.456 && kilo < 84.918)printf("Sing Buri");
    else if(kilo >= 84.918 && kilo < 85.900)printf("Lop Buri");
    else if(kilo >= 85.900 && kilo < 111.936)printf("Sing Buri");
    else if(kilo >= 111.936 && kilo < 150.019)printf("Chai Nat");
    else if(kilo >= 150.019 && kilo < 150.545)printf("Nakhon Sawan");
    else printf("InValid");
}