#include <stdio.h>

int main(){
    char fname[30],lname[30], fname2[30],lname2[30], fname3[30],lname3[30]; 

    scanf("%s",fname);
    scanf("%s",lname);
    scanf("%s %s",fname2, lname2);
    scanf("%s %s",fname3, lname3);

    printf("Person 1: %s %s\n",fname,lname);
    printf("Person 2: %s %s\n",fname2,lname2);
    printf("Person 3: %s %s",fname3,lname3);

    return 0;
}