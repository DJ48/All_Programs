#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee{
  char id[5];
  char name[20];
  char phone_no[10];
};

struct Employee *Emp;
int number_of_record;

void create();

void display();

void update();

void delete();

int main(){
    int choice;
    while(1){
        printf("\n1. Create Employee Records\n2. Display Records\n3. Update a Record\n4. Delete a Record\n5. Exit\n");
        printf("Enter Your Choice:\t");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                update();
                break;
            case 4:
                delete();
                --number_of_record;
                break;
            case 5:
                exit(1);
            default:
                printf("\nPlease Enter a Valid Choice.\n");
            
        }
    }
    return 0;
}

void create(){
    printf("\nEnter the number of records that you want to create:-\t");
    scanf("%d",&number_of_record);
    
    struct Employee *emp=(struct Employee*)malloc(sizeof(struct Employee)*number_of_record);
    
    printf("\nEnter the details of %d Employees.\n",number_of_record);
    for(int i=0;i<number_of_record;i++){
        printf("Enter the Id:-  ");
        scanf("%s",(emp+i)->id);
        printf("Enter the Name:-  ");
        scanf("%s",(emp+i)->name);
        printf("Enter the Phone Number:-  ");
        scanf("%s",(emp+i)->phone_no);
    }
    
    Emp=emp;
}

void display(){
    printf("\n----------Printing Details of %d Employees----------",number_of_record);
    for(int i=0;i<number_of_record;i++){
        printf("\n\nId:-  %s",(Emp+i)->id);
        printf("\nName:-  %s",(Emp+i)->name);
        printf("\nPhone Number:-  %s",(Emp+i)->phone_no);
    }
}

void update(){
    char search_id[5];
    int flag=0,index;
    printf("\nEnter the id that you want to update:-\t");
    scanf("%s",search_id);
    for(index=0;index<number_of_record;index++){
        if(strcmp((Emp+index)->id,search_id)==0){
            printf("\nEnter the Updated Details for Id:- %s\n",search_id);
            printf("Enter the Id:-  ");
            scanf("%s",(Emp+index)->id);
            printf("Enter the Name:-  ");
            scanf("%s",(Emp+index)->name);
            printf("Enter the Phone Number:-  ");
            scanf("%s",(Emp+index)->phone_no);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Employee with Id %s not found.",search_id);
    }
}

void delete(){
    char search_id[5];
    int search_index,flag=0,index;
    printf("\nEnter the id that you want to delete:-\t");
    scanf("%s",search_id);
    for(index=0;index<number_of_record;index++){
        if(strcmp((Emp+index)->id,search_id)==0){
            search_index=index;
            flag=1;
            break;
        }
    }
    
    if(flag==0){
        printf("Employee with Id %s not found.",search_id);
    }
    else{
        for(index=search_index;index<number_of_record;index++){
            if(index==number_of_record-1){
                strcpy((Emp+index)->id,"\0");
                strcpy((Emp+index)->name,"\0");
                strcpy((Emp+index)->phone_no,"\0");
            }
            else{
                strcpy((Emp+index)->id,(Emp+index+1)->id);
                strcpy((Emp+index)->name,(Emp+index+1)->name);
                strcpy((Emp+index)->phone_no,(Emp+index+1)->phone_no);
            }
        }
    }
    
}