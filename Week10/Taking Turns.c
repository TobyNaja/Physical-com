#include <stdio.h>
#include <stdlib.h>

typedef struct DataNode{
    int data;
    struct DataNode *next;
    struct DataNode *back;
} DataNode;

typedef struct linklist{
    int count;
    DataNode *haed;
} linklist;

linklist *createLinklist(){
    linklist *list = (linklist*) malloc(sizeof(linklist));
    list->count = 0;
    list->haed = NULL;
    return list;
}

DataNode *createDataNode(int data){
    DataNode *newNode = (DataNode*) malloc(sizeof(DataNode));
    newNode->data = data;
    newNode->next = NULL;
    newNode->back = NULL;
    
    return newNode;
}

void insert(linklist *list, int data){
    DataNode *pNew = createDataNode(data);
    if (list->count == 0) list->haed = pNew;
    else{
        DataNode *pointer = list->haed;
        while (pointer->next != NULL){
            pointer = pointer->next;
        }
        pointer->next = pNew;
        pNew->back = pointer;
    }
    list->count++;
}

void traverse(linklist *list){
    DataNode *pointerfont = list->haed;
    DataNode *pointerback = list->haed;
    int first = 1;
    while (pointerback->next != NULL){
        pointerback = pointerback->next;
    }
    if (list->count == 1){
        printf("%d", pointerfont->data);
        return ;
    }
    // if (list->count % 2 == 0){
        for (int i = 0; i < list->count/2;i++){
            if (i % 2 == 0) {
                if (first) { printf("%d", pointerback->data); first = 0; }
                else       { printf(" -> %d", pointerback->data); }
                printf(" -> %d", pointerfont->data);
            } 
            else {
                if (first) { printf("%d", pointerfont->data); first = 0; }
                else       { printf(" -> %d", pointerfont->data); }
                printf(" -> %d", pointerback->data);
            }
            pointerback = pointerback->back;
            pointerfont = pointerfont->next;
        }
    // }
        if (list->count % 2 == 1){
            printf(" -> %d",pointerfont->data);
        }
}

int main(){
    int num, data;
    scanf("%d",&num);
    linklist *mylist = createLinklist();
    for (int i = 0; i < num; i++){
        scanf("%d",&data);
        insert(mylist, data);
    }
    traverse(mylist);
}