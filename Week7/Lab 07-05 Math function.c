#include <stdio.h>

double getValue(){
    double value;
    scanf("%lf",&value);
    return value;
}

double findMin(double array[],int size){
    double min = array[0];
    for (int i=0;i<size;i++){
        if (min > array[i]){
            min = array[i];
        }
    }
    return min;
}

double findMax(double array[],int size){
    double max = array[0];
    for (int i=0;i<size;i++){
        if (max < array[i]){
            max = array[i];
        }
    }
    return max;
}

double findAvg(double array[],int size){
    double sum = 0, avg;
    for (int i=0;i<size;i++){
        sum += array[i];
    }
    avg = sum/size;
    return avg;
}

int main(){
    int n;
    scanf("%d",&n);

    double array[n];
    for (int i=0; i<n;++i){
        array[i] = getValue();
    }

    double min, max, avg;
    min = findMin(array, n);
    max = findMax(array, n);
    avg = findAvg(array, n);
    
    printf("%d Values\n",n);
    printf("Min: %.3lf\n",min);
    printf("Max: %.3lf\n",max);
    printf("Avg: %.3lf",avg);

    return 0;

}