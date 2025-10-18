#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct student_info{
    char name[60];
    char surname[60];
    char sex[10];
    int age;
    char id[12];
    double gpa;
}Student;
 
 

int main(){
    Student *s1 = malloc(sizeof(Student));
 
    scanf("%s %s %s %d %s %lf", 
          s1->name, s1->surname, s1->sex, &s1->age, s1->id, &s1->gpa);
 
    if (strcmp(s1->sex,"Male") == 0){
        printf("Mr %c %s (%d) ID: %s GPA %.2lf",s1->name[0],s1->surname,s1->age,s1->id,s1->gpa);
    }
    else{
        printf("Miss %c %s (%d) ID: %s GPA %.2lf",s1->name[0],s1->surname,s1->age,s1->id,s1->gpa);
    }
 
    free(s1);
    return 0;
}