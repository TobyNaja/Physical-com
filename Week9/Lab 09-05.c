#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 100 ,i;
    char *arr;
    
    arr = (char*) malloc(size * sizeof(char));
    
    scanf("%[^\n]s",arr);

    char *ptr = arr;
    while (*ptr != '\0')
        *ptr++;
    ptr--;
    while (ptr >= arr)
        printf("%c", *ptr--);

    free(arr);
    return 0;

}