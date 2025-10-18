#include <stdio.h>
#include <stdlib.h>
 
int main(){
    char *arr;
    char txt;
    int size = 0,capacity = 10;
 
    arr = (char*) malloc(capacity * sizeof(char));
    while (1){
        scanf(" %c",&txt);
        if (txt == '-'){
            break;
        }
 
        if (size >= capacity){
            capacity *= 2;
            char *temp = (char*) realloc(arr, capacity * sizeof(char));
            arr = temp;
        }
 
        *(arr + size) = txt;
        size++;
    }
 
    *(arr + size) = '\0';
 
    char *ptr = arr;
    while (*ptr != '\0'){
        printf("%c",*ptr++);
    }
    printf("\n");
    ptr--;
    while (ptr >= arr){
        printf("%c",*ptr--);
    }
     
    free(arr);
    return 0;
     