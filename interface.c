
/*
Jennifer VIllalba
Bulding a Tokenizer
LAb 1 complete here -- Using Same simpleUI together with tokenizer.c and history.c
06/24/2019 - not working yet 

*/

#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h" // why can't I use .h

int main(){
  // char string[100];
  char *string = malloc(100 *sizeof *string);
  int i =0;

  List *list = malloc(sizeof(list)); // init list to save inputs

  while(i < 4){ 
    printf(">>");
    // fgets(string, 100, stdin);
    scanf("%[^\n]s", string);
    add_history(list, string);
    printf("%s\n", string);
    i++;
  }

  // just the last string save it on every id
  print_history(list);

  char *str = get_history(list, 2);
  char **m;

  m = tokenize(str);
  print_tokens(m);
  
}
