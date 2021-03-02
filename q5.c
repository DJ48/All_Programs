#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct emp 

{

char id[5];

char name[20];

char phone_no[10];

};

int main()

{

struct emp employees[3];


strcpy(employees[0].id,"1234");

strcpy(employees[0].name,"Kiran");

strcpy(employees[0].phone_no,"987");

strcpy(employees[1].id,"345");

strcpy(employees[1].name,"Deepak");

strcpy(employees[1].phone_no,"765");

strcpy(employees[2].id,"487");

strcpy(employees[2].name,"Hari");

strcpy(employees[2].phone_no,"123456");

for(int i=0;i<3;i++){

printf("%s\n",employees[i].id);

printf("%s\n",employees[i].name);
printf("%s\n",employees[i].phone_no);
}
return 0;

}