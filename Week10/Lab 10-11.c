#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct info{
    char fname[61];
    char lname[61];
    char sex[7];
    int age;
    char id[13];
    double gpa;
} Student;

void sort_name(Student **list){
    for (int i = 0; i < 20 - 1; i++){
        int swapped = 0;
        for (int j = 0; j < 20 - 1 - i; j++){
            if (strcmp(list[j]->fname, list[j+1]->fname) > 0){
                Student *tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}

void sort_surname(Student **list){
    for (int i = 0; i < 20 - 1; i++){
        int swapped = 0;
        for (int j = 0; j < 20 - 1 - i; j++){
            if (strcmp(list[j]->lname, list[j+1]->lname) > 0){
                Student *tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}

void sort_id(Student **list){
    for (int i = 0; i < 20 - 1; i++){
        int swapped = 0;
        for (int j = 0; j < 20 - 1 - i; j++){
            if (strcmp(list[j]->id, list[j+1]->id) > 0){
                Student *tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}

int main(){
    Student *mylist[20];
    for (int i = 0; i < 20; i++){
        mylist[i] = (Student*) malloc(sizeof(Student));
        scanf("%s %s %s %d %s %lf", 
            mylist[i]->fname, mylist[i]->lname, mylist[i]->sex, &mylist[i]->age, mylist[i]->id, &mylist[i]->gpa);
    }
    char con[10];
    scanf("%s",con);
    for (int i = 0; i < 10; i++){
        con[i] = tolower(con[i]);
    }
    if (strcmp(con,"name")==0) sort_name(mylist);
    else if (strcmp(con, "surname") == 0) sort_surname(mylist);
    else if (strcmp(con, "id") == 0) sort_id(mylist);

    for (int i = 0; i < 20; i++){
        if (strcmp(mylist[i]->sex, "Male") == 0){
            printf("Mr %c %s (%d) ID: %s GPA %.2lf\n",mylist[i]->fname[0], mylist[i]->lname, mylist[i]->age, mylist[i]->id, mylist[i]->gpa);
        }
        else{
            printf("Miss %c %s (%d) ID: %s GPA %.2lf\n",mylist[i]->fname[0], mylist[i]->lname, mylist[i]->age, mylist[i]->id, mylist[i]->gpa);
        }
    }
    for (int i = 0; i < 20; i++) {
        free(mylist[i]);
    }

    return 0;
}