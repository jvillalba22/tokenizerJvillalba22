/*
TOkenizer Lab 1
Jennifer Villalba
Summer 2019
*/

#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int main(){

  /*Check first methods*/
  char* s = "Jennifer";
  int i = 0;
  i = string_length(s);
  printf("Try 1 function - %s length %d \n ", s, i);  // work


  char a = 'a';
  char sp = ' ';
  if(is_valid_character(a))
    printf("isValid Function work for true!! \n");

  if(!is_valid_character(sp))
    printf("Is valid Func. work for false \n");

  printf("Try f_w_s with string '   my cake' \n");
  printf(find_word_start("  my cake"));
  printf("\n");
  
}


/* Counts the number of characters in the string argument. */
int string_length(char* str){
  int c = 0; // counter
  while(str[c] != '\0'){ //while char is not empty
    c++;
  }
  return c;
}

/* Evaluates if the character c is an acceptable character for
   a token. Acceptable characters include any alphanumeric or
   special character. Unacceptable characters include any
   whitespace or control characters.
   Returns 0 if not, 1 if yes. */
char is_valid_character(char c){
  // A
  if(c >= 33 && c <= 126)
    return 1;
  return 0;
}

/* Finds the next word in the string. 
   For example, given an input of "  my cake" the function
   should return "my cake". */
char* find_word_start(char* str){
  int i;
  while(!is_valid_character(str[i])){
      i++;  
   }  
  return (str + i);
}





