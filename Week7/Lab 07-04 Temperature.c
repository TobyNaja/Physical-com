#include <stdio.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelsius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main(){
    double tem;
    char type;
    double ans;

    scanf("%lf %c",&tem,&type);

    if (type == 'c' || type == 'C'){
        ans = celsiusToFahrenheit(tem);
        printFarenheit(ans);
    }
    else if (type == 'f' || type == 'F'){
        ans = fahrenheitToCelsius(tem);
        printCelcius(ans);
    }
}

double celsiusToFahrenheit(double celcius){
    double f;
    f = 32.0 + celcius*(180.0/100.0);
    return f;
}
double fahrenheitToCelsius(double fahrenheit){
    double c;
    c = (fahrenheit - 32.0) * 5.0/9.0;
    return c;
}
void printFarenheit(double fahrenheit){
    printf("%.2lf f",fahrenheit);
}
void printCelcius(double celcius){
    printf("%.2lf c",celcius);
}