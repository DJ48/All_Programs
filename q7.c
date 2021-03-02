/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int stack[5];

int queue[5];

int top=-1;

int front=-1;

int rear=-1;

void push(){
    if(top==5)
        printf("Stack Overflow\n");
    else{
        printf("Enter the data:- ");
        scanf("%d",&stack[++top]);
    }
}

int pop(){
    if(top==-1)
        printf("stack Underflow\n");
    else{
        return stack[top--];  
    }
}

void enqueue(){
    if(rear == 5){
        printf("queue Overflow\n");
    }
    else{
        ++front;
        queue[++rear]=pop();
    }
}

void display(){
    int i;
    for(i=rear;i>=0;i--)
        printf("%d ",queue[i]);
}

int main()
{
    int i;
    for(i=0;i<5;i++){
        push();
    }
    for(i=0;i<5;i++){
        enqueue();
    }
    display();
    return 0;
}
