/*
Tokenizer Lab 1
Jennifer Villalba
Summer 2019
06/18/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
/*

int main(){
  /*

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

  
printf("\n"); 
  

  int w;
  //printf("Test count words debe ser 4\n");
  char *m = " Jennifer Vullsl caca    banana";
  
  printf("Try f_w_s with string '   my cake' \n");
  printf(find_word_start(m));
  printf("\n");

  
  printf("Test end string with 'happy joy\n");
  printf("%s\n", find_word_end(m));
  
  
  printf("%s\n", m);  
  w = count_words(m);
  printf("- %d \n", w);
  
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
  // just have this in a variable
  char val;
  if(c >= 33 && c <= 126){
    return val = 1;
  }
  return val = 0;
}

/* Finds the next word in the string. 
   For example, given an input of "  my cake" the function
   should return "my cake". */
char* find_word_start(char* str){
  int c =0;// !!!!!!!!!!!!!
  while(!is_valid_character(str[c])){
      c++;  
   }  
  return str+ c;
}

/* Finds the end of current word.
   For example, given an input of "my cake" the function
   should return " cake". */
char* find_word_end(char* str){ 
  int c = 0;
  //  str = find_word_start(str) ; //!!!!!!!!!!
  while(str[c] != '\0'){
    //need to find first invalid char and erase everything before it
    if(str[c] == ' '){
      goto jump; // end loop here
    }
    c++;
  }
 jump:
  str = str + c;
  return str; /*
  int c = 0;
  while(is_valid_character(str[c]) != 0){
      c++;
    }
    return str +c; */
}


/* Counts the number of words in the string argument.*/ 
int count_words(char* str){ // ?? need to be tested more
  int c = 0;
  
  while(str[0] != '\0'){ //while(str[0] != '\0'){
    // Functions help to count by curing the word between the invalid characters such as a space
    str = find_word_start(str);
    str = find_word_end(str);
    c++;
  }
  return c;
}

/* Copies the next word in str to copy./ 
void copy_word(char* str, char* copy) {
  int len = string_length(str);
  copy = (char*) malloc(len+1); //plus one to add space to the terminator\0
  while(*str){
    *copy++ = *str++;
  }
  *copy = '\0';
}
*/
