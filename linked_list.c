#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node * next;
};

struct node *head=NULL;

struct node* createnode(){
    struct node * temp=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    return temp;
}

void createlist(int data){
    struct node* new_node,*temp;
    new_node=createnode();
    new_node->data=data;
    new_node->next=NULL;
    if(head == NULL){
        head=new_node;
    }
    else{
        temp=head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
}

void display(){
    struct node *t=head;
    while(t != NULL){
        printf("%d-->",t->data);
        t=t->next;
    }
    printf("NULL\n");
}

void deletenode(){
    int value;
    struct node *t=head,*r=NULL;
    //printf("\nEnter the data that you want to delete:-");
    scanf("%d",&value);
    if(head->data == value){
        head=head->next;
        free(t);
    }
    else{
        while(t->data != value){
            r=t;
            t=t->next;
        }
        r->next=t->next;
        free(t);
    }
    
    
}

void reverse(){
    struct node *prev,*current,*next;
    current=head;
    while(t->next != NULL){
        r=t;
        t=t->next;
        t->next=r;
    }
    head=t;
}

int main() {
    int n;
    printf("Enter the no. of nodes that you want to create:-");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int temp_data;
        printf("\nEnter the node data:-");
        scanf("%d",&temp_data);
        createlist(temp_data);
    }
    display();
    //deletenode();
    reverse();
    display();
    return 0;
}