#include <stdio.h>
 
int main(){
    char name[30],lastname[30];
    int id, dd, mm, yy;;
    float gpa;
 
    scanf("%s",name);
    scanf("%s",lastname);
    scanf("%d",&id);
    scanf("%d/%d/%d \n" , &dd,&mm,&yy);
    scanf("%f",&gpa);
 
    printf("Fullname: %s %s\n", name, lastname);
    printf("ID: %d\n", id);
    printf("DOB: %02d-%02d-%02d\n", dd, mm, yy);
    printf("GPA: %.2f\n", gpa);
    
    return 0;
}