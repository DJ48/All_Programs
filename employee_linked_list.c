#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee{
    char id[5];
    char first_name[20];
    char last_name[20];
    char phone_no[10];
    int salary;
    struct Employee *next;
};

struct Employee *emp_head=NULL;

void add_a_record();

void display();

void update();

void delete();

void search();

int main(){
    int choice;
    
    while(1){
        printf("--------------------MENU--------------------");
        printf("\n1. Add an Employee Record\n2. Display Records\n3. Update a Record\n4. Delete a Record\n5. Search a Record\n6. Exit\n");
        printf("----------------------------------------------\n");
        printf("Enter Your Choice:-  ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                    add_a_record();
                    break;
            case 2:
                    display();
                    break;
            case 3:
                    update();
                    break;
            case 4:
                    delete();
                    break;
            case 5:
                    search();
                    break;
            case 6:
                    exit(1);
                    break;
            default:
                    printf("\nPlease Enter a Valid Choice.\n");
                    break;
        }
    }
    
    return 0;
}

void add_a_record(){
    struct Employee *current_record=emp_head;
    struct Employee *emp_new_record=(struct Employee*)malloc(sizeof(struct Employee));
    printf("\n---------Enter Employee Details---------\n");
    printf("Enter ID:- ");
    scanf("%s",emp_new_record->id);
    printf("Enter First Name:- ");
    scanf("%s",emp_new_record->first_name);
    printf("Enter Last Name:- ");
    scanf("%s",emp_new_record->last_name);
    printf("Enter Phone Number:- ");
    scanf("%s",emp_new_record->phone_no);
    printf("Enter Salary:- ");
    scanf("%d",&emp_new_record->salary);
    emp_new_record->next=NULL;
    if(emp_head == NULL){
        emp_head=emp_new_record;
    }
    else{
        while(current_record->next!=NULL){
            current_record=current_record->next;
        }
        current_record->next=emp_new_record;
    }
}

void display(){
    struct Employee *current_record=emp_head;
    printf("\n---------Printing Details of Employees---------\n");
    while(current_record != NULL){
        printf("\nId: %s\n",current_record->id);
        printf("Name: %s %s\n",current_record->first_name,current_record->last_name);
        printf("Contact No: %s\n",current_record->phone_no);
        printf("Salary: %d\n",current_record->salary);
        current_record=current_record->next;
    }
}

void update(){
    char search_id[5];
    int flag=0;
    struct Employee *current_record=emp_head;
    printf("\nEnter the id for which you want to update the details: ");
    scanf("%s",search_id);
    while(current_record != NULL){
        if(strcmp(current_record->id,search_id) == 0){
            flag=1;
            break;
        }
        current_record=current_record->next;
    }
    if(flag == 0){
        printf("\nEmployee with id %s not found.\n",search_id);
    }
    else{
        printf("\n---------Update Employee Details---------\n");
        printf("Enter ID:- ");
        scanf("%s",current_record->id);
        printf("Enter First Name:- ");
        scanf("%s",current_record->first_name);
        printf("Enter Last Name:- ");
        scanf("%s",current_record->last_name);
        printf("Enter Phone Number:- ");
        scanf("%s",current_record->phone_no);
        printf("Enter Salary:- ");
        scanf("%d",&current_record->salary);
    }
}

void delete(){
    char search_id[5];
    int flag=0;
    struct Employee *current_record=emp_head,*prev_record=NULL;
    printf("\nEnter the id you want to Delete: ");
    scanf("%s",search_id);
    if(emp_head != NULL && strcmp(emp_head->id,search_id)==0){
        emp_head=emp_head->next;
        flag=1;
        free(current_record);
    }
    else if(current_record == NULL){
        flag=0;
    }
    else{
        while(current_record != NULL){
            if(strcmp(current_record->id,search_id) == 0){
                flag=1;
                break;
            }
            prev_record=current_record;
            current_record=current_record->next;
        }
        prev_record->next=current_record->next;
        free(current_record);
    }
    if(flag == 0){
        printf("\nEmployee with id %s not found.\n",search_id);
    }
}

void search(){
    char search_id[5];
    int flag=0;
    struct Employee *current_record=emp_head;
    printf("\nEnter the id you want to Search: ");
    scanf("%s",search_id);
    while(current_record != NULL){
        if(strcmp(current_record->id,search_id) == 0){
            flag=1;
            break;
        }
        current_record=current_record->next;
    }
    if(flag == 0){
        printf("\nEmployee with id %s not found.\n",search_id);
    }
    else{
        printf("\n---------Employee found---------\n");
        printf("Id: %s\n",current_record->id);
        printf("Name: %s %s\n",current_record->first_name,current_record->last_name);
        printf("Contact No: %s\n",current_record->phone_no);
        printf("Salary: %d\n",current_record->salary);
    }
}