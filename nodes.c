#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data; 
   struct node *next; 
};

struct node *head;
struct node *tail;

void insertAtBeginning (struct node **head_ref, int new_data)
{
   struct node *temp = (struct node*)malloc(sizeof(struct node));
   temp->data = new_data;
   temp->next = *(head_ref);
   *(head_ref)=temp;

}

void insertAtEnd (struct node **head_ref, int new_data)
{
   struct node *temp = (struct node*)malloc(sizeof(struct node));
   struct node *last = *head_ref; 
   temp->data = new_data;
   temp->next = NULL;

   if (*head_ref == NULL) 
   {
      *head_ref = temp;
      return;
   }

   while (last->next != NULL)
   
   last = last->next; 
   last->next = temp;
   return;
   
}

void insertAfter (struct node *prev_node, int new_data) 
{

   struct node *temp = (struct node*)malloc(sizeof(struct node));
   temp->data = new_data;
   temp->next = prev_node->next; 
   prev_node->next = temp;

   return;
}

void makeCircular(struct node *head)
{
   struct node *first = head;

   while (head->next != NULL)
   head = head->next;

   if (head->next == NULL)
   head->next = first;
   return;
   
}

void delete(struct node *head)
{
   struct node *temp = (struct node*)malloc(sizeof(struct node));
   temp = head;
   temp->next = head->next->next;
   return;
   
}

int search(struct node *node, int element)
{
   struct node *first = head;

   do
   {
     if (node->data != element)
     {
         node = node->next;
     }

     else if (node->data == element)
     {
        return 1;
     }
     
   } while (node != head);

  return 0;

}

void sortList(struct node *head)
{
   struct node *temp = head;
   int holder;

   while (temp->next != head) 
   {
      struct node *nextTemp = temp->next;
      while (nextTemp != head)
      {
         if (temp->data>nextTemp->data)
         {
            holder = nextTemp->data;
		    nextTemp->data = temp->data;
		    temp->data = holder;
	     }
	     nextTemp = nextTemp->next;  
      }
      temp = temp->next;
   }
}

void print(struct node *node)
{
   struct node *first = head;
  
      do
      {
         printf(" %d",node->data);
         node = node->next;
      } while (node != head);

}


int main()
{
   head = NULL;
   
   insertAtEnd(&head, 5);

   insertAtBeginning(&head, 7);

   insertAtBeginning(&head, 9);
   
   insertAtEnd(&head, 4);

   insertAtEnd(&head, 3);

   insertAfter(head->next->next, 1);

   makeCircular(head);

   printf("Circular singly linked list: ");
   print(head);

   printf("\nNew list after deleting an element:");
   delete(head);
   print(head);

   printf("\nSearching for element 3:");
   if (search(head, 3))
      {
         printf("\nElement 3 is found");
      }
      
   else 
      {
         printf("\nElement 3 is not found");
          
      }

   printf("\nSearching for element 7:");
   if (search(head, 7))
      {
         printf("\nElement 7 is found");
      }
      
   else 
      {
         printf("\nElement 7 is not found");
          
      }

   sortList(head);
   printf("\nSorted List:");
   print(head);

}
