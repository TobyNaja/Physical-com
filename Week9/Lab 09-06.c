#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(){
    char *arr;
    int low = 0, up = 0, digit = 0;
 
    arr = (char*) malloc(100 * sizeof(char));
    scanf("%[^\n]s", arr);
 
    char *ptr = arr;
    while (*ptr != '\0'){
        if (islower(*ptr)){
            low++;
        }
        else if(isupper(*ptr)){
            up++;
        }
        else if (isdigit(*ptr)){
            digit++;
        }
        ptr++;
    }
    printf("Lowercase letters: %d\n",low);
    printf("Uppercase letters: %d\n",up);
    printf("Digits: %d",digit);
    
    free(arr);
    return 0;
 
 
}