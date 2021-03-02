/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head = NULL;

void create ();

void print ();

void insert_at_end ();

int
main ()
{
  int choice;
  while (1)
    {
      printf ("\n---------MENU---------\n");
      printf ("1.create\n2.Print\n3.insert_at_end\n4.exit\n");
      printf ("Enter your choice:");
      scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  create ();
	  break;
	case 2:
	  print ();
	  break;
	case 3:
	  insert_at_end ();
	  break;
	case 4:
	  exit (1);
	default:
	  printf ("Invalid Choice\n");
	}
    }

  return 0;
}

void
create ()
{
  struct node *newnode = (struct node *) malloc (sizeof (struct node));
  struct node *temp;

  printf ("Enter the data");
  scanf ("%d", &newnode->data);
  newnode->next = NULL;

  if (head == NULL)
    {
      head = newnode;
    }
  else
    {
      temp = head;
      while (temp->next != NULL)
	{
	  temp = temp->next;
	}
      temp->next = newnode;
    }
}

void
insert_at_end ()
{
  struct node *newnode = (struct node *) malloc (sizeof (struct node));
  struct node *temp;

  printf ("Enter the data that you want to insert: ");
  scanf ("%d", &newnode->data);
  newnode->next = NULL;

  temp = head;
  while (temp->next != NULL)
    {
      temp = temp->next;
    }
  temp->next = newnode;
}

void
print ()
{
  struct node *temp = head;
  while (temp != NULL)
    {
      printf ("%d  ", temp->data);
      temp = temp->next;
    }
}
