#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode{
    char *data;
    struct DataNode *next;
}DataNode;

typedef struct LinkList{
    int count;
    DataNode *head;
}LinkList;

LinkList *createLinklist(){
    LinkList *list = (LinkList*) malloc(sizeof(LinkList));
    list->count = 0;
    list->head = NULL;

    return list;
}

DataNode *createDataNode(char *data){
    DataNode *newNode = (DataNode*) malloc(sizeof(DataNode));
    newNode->data = malloc(strlen(data) + 1);
    
    strcpy(newNode->data,data);
    newNode->next = NULL;
    return newNode;
}

void insert_last(LinkList *list, char *data){
    DataNode *pNew = createDataNode(data);
    if (list->count == 0) list->head = pNew;
    else{
        DataNode *pointer = list->head;
        while (pointer->next != NULL){
            pointer = pointer->next;
        }
        pointer->next = pNew;
    } 
    list->count++;
}

void insert_front(LinkList *list, char *data){
    DataNode *pNew = createDataNode(data);
    if (list->count == 0) list->head = pNew;
    else{
        DataNode *pointer = list->head;
        pNew->next = pointer;
        list->head = pNew;
    }
    list->count++;
}

void delete(LinkList *list, char *data){
    DataNode *current = list->head;
    DataNode *prev = NULL;

    if (list->count == 0){
        printf("Cannot delete, %s does not exist.\n",data);
        return;
    }

    if (strcmp(current->data,data) == 0){
        list->head = current->next;
        free(current->data);
        free(current);
        list->count--;
        return;
    }
    while (current != NULL && strcmp(current->data,data) != 0){
        prev = current;
        current = current->next;
    }

    if (current == NULL){
        printf("Cannot delete, %s does not exist.\n",data);
        return;
    }
    prev->next = current->next;
    free(current->data);
    free(current);
    list->count--;
    return;
}

void traveres(LinkList *list){
    if (list->count == 0){
        printf("This is an empty list.");
        return;
    }
    DataNode *pointer = list->head;
    while (pointer->next != NULL){
        printf("%s -> ",pointer->data);
        pointer = pointer->next;
    }
    printf("%s",pointer->data);
}

int main(){
    int num;
    scanf("%d",&num);
    char con, data[101];
    LinkList *mylist = createLinklist(); 

    for (int i = 0; i < num; i++){
        scanf(" %c: %[^\n]",&con, data);
        
        if (con == 'L') insert_last(mylist, data);
        else if (con == 'F') insert_front(mylist, data);
        else if (con == 'D') delete(mylist,data);
        else printf("Invalid Condition!\n");
    }

    traveres(mylist);


    DataNode* current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
    
}