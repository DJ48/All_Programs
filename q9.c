/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int arr2[4][3];

struct node{
    int data;
    struct node *next;
};

struct node *createnode(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}

struct node *create(int i){
    struct node *head=NULL;
    int j;
    for(j=0;j<3;j++){
        if(j==0){
            head=createnode(arr2[i][j]);
        }
        else{
            struct node *temp=head;
            while(temp->next != NULL){
                temp=temp->next;
            }
            temp->next=createnode(arr2[i][j]);
        }
    }
    return head;
}


int main()
{
    struct node *arr[4];
    
    int i,j,temp=10;
    
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            arr2[i][j]=temp;
            temp++;
        }
    }
    
    for(i=0;i<4;i++){
        arr[i]=create(i);
    }
    
    for(i=0;i<4;i++){
        struct node *temp=arr[i];
        while(temp != NULL){
            printf("%d,%u\-\-\>",temp->data,temp->next);
            
            temp=temp->next;
        }
        printf("\n");
    }

    return 0;
}
