#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode{
    char *data;
    struct DataNode *next;
}DataNode;

typedef struct SinglyLinkedList{
    unsigned count;
    DataNode *head;
}SinglyLinkedList;

DataNode* createDataNode(char* data){
    DataNode *node  = malloc(sizeof(DataNode));
    node->data = malloc(strlen(data)+1);
    strcpy(node->data,data);
    node->next = NULL;
    return node;
}

SinglyLinkedList* createSinglyLinkedList(){
    SinglyLinkedList *list = malloc(sizeof(SinglyLinkedList));
    list->count = 0;
    list->head = NULL;
    return list;
}

void insert_front(SinglyLinkedList *list, char *data){
    DataNode *pNew = createDataNode(data);

    if (list->count == 0){
        list->head = pNew;
    }
    else{
        pNew->next = list->head;
        list->head = pNew;
    }
    list->count++;
}

void insert_last(SinglyLinkedList *list, char *data){
    DataNode *pNew = createDataNode(data);
    if (list->count == 0){
        list->head = pNew;
    }
    else{
        DataNode *pointer = list->head;
        while (pointer->next != NULL){
            pointer = pointer->next;
        }
        pointer->next = pNew;
    }
    list->count++;
}

void delete(SinglyLinkedList *list, char *data){
    DataNode *current = list->head;
    DataNode *previous = NULL;

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
        previous = current;
        current = current->next;
    }
    if (current == NULL) {
        printf("Cannot delete, %s does not exist.\n", data);
        return;
    }
    previous->next = current->next;
    free(current->data);
    free(current);
    list->count--;
    return;
}

void traverse(SinglyLinkedList *list){
    if (list->count == 0) {
        printf("This is an empty list.\n");
        return;
    }
    
    DataNode *pointer = list->head;
    while (pointer->next != NULL){
        printf("%s -> ",pointer->data);
        pointer = pointer->next;
    }
    printf("%s",pointer->data);
    return;
    
}

int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]", &condition, data);

        if (condition == 'F') {
            insert_front(mylist, data);
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            delete(mylist, data);
        } else {
            printf("Invalid Condition!\n");
        }
    }

    traverse(mylist);
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