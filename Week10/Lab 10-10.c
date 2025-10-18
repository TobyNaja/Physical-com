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

int cmp_name(const void *a, const void *b) {
    Student *s1 = *(Student **)a;
    Student *s2 = *(Student **)b;
    return strcmp(s1->name, s2->name);
}

int cmp_surname(const void *a, const void *b) {
    Student *s1 = *(Student **)a;
    Student *s2 = *(Student **)b;
    return strcmp(s1->surname, s2->surname);
}

int cmp_id(const void *a, const void *b) {
    Student *s1 = *(Student **)a;
    Student *s2 = *(Student **)b;
    return strcmp(s1->id, s2->id);
}

int main(){
    Student *mylist[20];
    for (int i = 0;i < 20;i++){
        mylist[i] = malloc(sizeof(Student));
        scanf("%s %s %s %d %s %lf", 
            mylist[i]->name, mylist[i]->surname, mylist[i]->sex, &mylist[i]->age, mylist[i]->id, &mylist[i]->gpa);
    }
    char condi[10];
    scanf("%s",condi);
    int n = sizeof(mylist) / sizeof(mylist[0]);

    if (strcmp(condi,"name") == 0){
        qsort(mylist,n,sizeof(Student*),cmp_name);
    }
    else if(strcmp(condi,"surname") == 0){
        qsort(mylist,n,sizeof(Student*),cmp_surname);
    }
    else if(strcmp(condi,"id") == 0){
        qsort(mylist,n,sizeof(Student*),cmp_id);
    }

    for (int i = 0; i < n; i++) {
        if (strcmp(mylist[i]->sex, "Male") == 0) {
            printf("Mr %c %s (%d) ID: %s GPA %.2lf\n",
                   mylist[i]->name[0],
                   mylist[i]->surname,
                   mylist[i]->age,
                   mylist[i]->id,
                   mylist[i]->gpa);
        } else {
            printf("Miss %c %s (%d) ID: %s GPA %.2lf\n",
                   mylist[i]->name[0],
                   mylist[i]->surname,
                   mylist[i]->age,
                   mylist[i]->id,
                   mylist[i]->gpa);
        }
    }

    for (int i = 0; i < n; i++) {
        free(mylist[i]);
    }
    
    return 0;
}