/*
Jennifer Villalba -- Tokenizer/History 
Maintaining history 
06/24/2019
*/

#include <stdio.h>
#include <stdlib.h>
#include "history.h"

/*
int main(){
  //init list and creating memory to it 
  List* t = malloc(sizeof(List));
  printf("Creating List..\n");
  // adding and printing working
  add_history(t, "Test Tokenizer");
  add_history(t, "Jennifer Villalba Leal");
  add_history(t, "Lab   number one   is");
  add_history(t, "sit");
  
print_history(t);

  // NULL Do not stop the loop but all the history is is save it 
  printf("Trying get\n");
  char* s;
  int i = 1;
  while(t != NULL && i < 6){
  s = get_history(t,i);
  printf("GET id %d - %s\n", i, s);
  i++;
  }

  //
  printf("Try Clean History\n");
  free_history(t);
  print_history(t);

  } */

/* Initialize the linked list to keep the history. */
List* init_history(){
  List* head = (List*)malloc(sizeof(List));
  head->root = NULL;
  return head;
}


/* Add a history item to the end of the list.
   List* list - the linked list
   char* str - the string to store
*/
void add_history(List* list, char* str){
  // List c = *list;
  List* current = (List*) malloc(sizeof(List));
  //current = &c;

   current = list;

  // counter for the id of the new item
  int i = 1;
  Item* new = (Item*) malloc(sizeof(new)); // memory for the new item to be added it on the list
  Item* newTemp = (Item*) malloc(sizeof(newTemp)); //tmep for the new item

  new ->str = str;///!!!!!!!!!!!!!!!
  new->id = 1;
  new->next = NULL;

  //add first node if is empty
  if(current->root == NULL){
    current->root = new;
    return;
  }

  newTemp = current->root;
  //itenerate
  while(newTemp->next != NULL){
    i++;
    newTemp = newTemp->next;
  }
  i++;
  newTemp->next = new;
  new->id = i;
  return;
}

/* Retrieve the string stored in the node where Item->id == id.
   List* list - the linked list
   int id - the id of the Item to find */
char* get_history(List* list, int id){
  List c = *list;
  List* current = (List*) malloc(sizeof(List));
  current = &c;

  while(current->root != NULL){
    if(current->root->id == id)
      return (current->root->str);
    current->root = current->root->next;
  }
  return "ID NOT FOUND";
}

/* Print the entire contents of the list. */
void print_history(List* list){
  List c = *list;
  List* current = (List*) malloc(sizeof(List));
  current = &c;

  if(current->root  == NULL){
    printf("The List is Empty!!!!!!!!!\n");
    return;
  }

  while(current->root->next != NULL){
    printf("id %d - %s\n", current->root->id, current->root->str);
    current->root = current->root->next;
  }
  printf("id %d - %s\n", current->root->id, current->root->str);
  return;
}

/* Free all Items and the List. */
void free_history(List* list){
  List* current = list;
  while(current->root != NULL){
    free(current->root);
    current->root = current->root->next;
  }
}
