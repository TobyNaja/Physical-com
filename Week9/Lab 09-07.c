#include <stdio.h>
#include <stdlib.h>

int main(){
    int size,frequency;
    char *arr;

    scanf("%d",&size);
    scanf("%d",&frequency);
    
    arr = (char*) malloc(size * sizeof(char));
    scanf(" %[^\n]s",arr);

    char *ptr = arr;
    char *end = arr + size;
    while (ptr < end){
        printf("%c",*ptr);
        ptr += frequency;
    }
    
    free(arr);
    return 0;

}