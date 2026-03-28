#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head = NULL;

void insertNode(int value){
    struct Node* new_Node = (struct Node*)malloc(sizeof(struct Node));
    new_Node->data = value;
    new_Node->next=NULL;

    if(head==NULL){
        head == new_Node;
    }else{
        struct Node* current = head;
        while(current->next!= NULL)
        {
            current=current->next;
        }
        current->next=new_Node;
        
    }
}
void print(){
    struct Node* current = head;
    while(current!=NULL){
        printf("%d",current->data);
        current=current->next;
    }
    
}

int main(){
    insertNode(10);
    insertNode(20);
    insertNode(30);
    insertNode(40);
    print();
    return 0;
}