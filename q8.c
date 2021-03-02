#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

struct node *top=NULL;

struct node *createnode(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    return newnode;
}

void create(){
    int data;
    printf("Enter the data:- ");
    scanf("%d",&data);
    struct node *temp;
    if(head == NULL){
        head=createnode();
        head->data=data;
    }
    else{
        temp=head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=createnode();
        temp->next->data=data;
    }
}

void display(){
    struct node *temp=head;
    while(temp != NULL){
        printf("%d,%u--> ",temp->data,temp->next);
        temp=temp->next;
    }
}

void copy(){
    struct node *temp,*t2=head;
    while(t2 != NULL){
        temp=createnode();
        if(top == NULL){
            temp->data=t2->data;
            top=temp;
        }
        else{
            temp->data=t2->data;
            temp->next=top;
            top=temp;
        }
        if(t2->next != NULL)
            t2=t2->next->next;
        else
            break;
    }
}

void display_stack(){
    struct node *temp=top;
    while(temp != NULL){
        printf("%d\t", temp->data);
        temp=temp->next;
    }
}

int main(){
    int choice;
    while(1){
        printf("\n-----Menu-----");
        printf("\n1. Create a node");
        printf("\n2. Display the List");
        printf("\n3. Copy alternate into stack");
        printf("\n4. Display Stack");
        printf("\n5. Exit");
        printf("\nEnter your choice:- ");
        scanf("%d",&choice);
        switch(choice){
            case 1: create();
                    break;
            case 2: display();
                    break;
            case 3: copy();
                    break;
            case 4: display_stack();
                    break;
            case 5: exit(1);
            default:
                    printf("Invalid choice\n");
                    break;
        }
    }
    return 0;
}