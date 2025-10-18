#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int compare(const void *a, const void *b) {
    char c1 = *(char *)a;
    char c2 = *(char *)b;

    char lower1 = tolower(c1);
    char lower2 = tolower(c2);

    if (lower1 != lower2)
        return lower1 - lower2;

    if (islower(c1) && isupper(c2))
        return -1;
    if (isupper(c1) && islower(c2))
        return 1;

    return 0;
}

int main() {
    char str[1000];

    scanf("%[^\n]", str);

    qsort(str, strlen(str), sizeof(char), compare);

    for (int i = 0; str[i] != '\0';i++){
        int count = 1;
        if (str[i] == '0' || str[i] == ' '){
            continue;
        }
        for (int j = i+1; str[j] != '\0';j++){
            if (str[i] == str[j]){
                count++;
                str[j] = '0';
            }
        }
        printf("%c = %d\n",str[i],count);
        // str[i] = '0'
    }
    return 0;
}
