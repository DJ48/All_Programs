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

struct node *top=NULL;

int count =0;

void push();

void print();

int main()
{
    int choice;
    while(1){
        printf("\n---------MENU---------\n");
        printf("1.Push\n2.Print\n3.Print no. of elements\n4.exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1: push();
                    count++;
                    break;
            case 2: print();
                    break;
            case 3: printf("No. of elements are %d",count);
                    break;
            case 4: exit(1);
            default:printf("Invalid Choice\n");
        }
    }

    return 0;
}

void push(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    
    printf("Enter the data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    
    if(top == NULL){
        top=newnode;
    }
    else{
        newnode->next = top;
        top = newnode;
    }
}

void print(){
    struct node *temp=top;
    while(temp != NULL){
        printf("%d  ",temp->data);
        temp=temp->next;
    }
}
