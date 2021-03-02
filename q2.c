/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int stack[4];

int top = -1;

void push(int data);

void print();

int
main ()
{
  int ar[]={1,2,3,4};
  push(ar[0]);
  push(ar[1]);
  push(ar[2]);
  push(ar[3]);
  print();
  return 0;
}

void
push (int data)
{
  if(top == 4){
      printf("Stack Overflow\n");
  }
  else{
      top++;
      stack[top]=data;
  }
}


void
print ()
{
  int i;
  for(i=0;i<4;i++){
      printf("%d ",stack[i]);
  }
}
