#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char bookid[5];
    
    scanf("%[^\n]",bookid);

    int index = strlen(bookid);
    int number = atoi(bookid);
    char last = bookid[index-1];

    if (number < 1000){
        if (last == '0' || last == '5')printf("Science");
        else if (last == '3' || last == '7')printf("Literature");
        else printf("General Collection");
    }
    else if (number >= 1000){
        int last_two = (bookid[index - 2] - '0') * 10 + (bookid[index - 1] - '0');
        if (last_two % 4 == 0)printf("Reference");
        else if (last_two == 11 || last_two == 22 || last_two == 33)printf("History");
        else printf("Unclassified");
    }

    return 0;
}