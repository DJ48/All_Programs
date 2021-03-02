/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;

void enqueue();

void print();

int main()
{
    enqueue(9);
    enqueue(8);
    enqueue(7);
    enqueue(6);
    enqueue(5);
    print();

    return 0;
}

void enqueue(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    
    if(rear == NULL){
        front=newnode;
        rear=newnode;
    }
    else{
        while(rear->next != NULL){
            rear=rear->next;
        }
        rear->next=newnode;
        rear=rear->next;
    }
}

void print(){
    struct node *temp=front;
    while(temp != NULL){
        printf("%d  ",temp->data);
        temp=temp->next;
    }
}
