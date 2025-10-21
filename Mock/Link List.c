#include <stdio.h>
#include <stdlib.h>

typedef struct DataNode{
    int data;
    struct DataNode *next;
}DataNode;

typedef struct LinkList{
    int count;
    DataNode *head;
}LinkList;

LinkList *createLinkList(){
    LinkList *list = (LinkList*) malloc(sizeof(LinkList));
    list->count = 0;
    list->head = NULL;
    return list;
}

DataNode *createDataNode(const int data){
    DataNode *newNode = (DataNode*) malloc(sizeof(DataNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insert_last(LinkList *list,  int data){
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

void insert(LinkList *list, int index ,int data){
    DataNode *pNew = createDataNode(data);

    if (index == 0){
        pNew->next = list->head;
        list->head = pNew;

        return;
    }

    DataNode *pointer = list->head;
    for (int i = 0; i < index - 1;i++){
        pointer = pointer->next;
    }
    pNew->next = pointer->next;
    pointer->next = pNew;

}

void traveres(const LinkList *list){
    DataNode *pointer = list->head;
    while (pointer->next != NULL){
        printf("%d ",pointer->data);
        pointer =pointer->next;
    }
    printf("%d",pointer->data);
    
}

int main(){
    int num;
    int data;
    scanf("%d",&num);

    LinkList *mylist = createLinkList(); 
    for (int i = 0; i < num; i++){
        scanf("%d",&data);
        insert_last(mylist, data);
    }
    int index;
    scanf("%d",&index);
    scanf("%d",&data);
    insert(mylist,index,data);
    traveres(mylist);

    return 0;
}