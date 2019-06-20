
/*
Tokenizer Lab 1
Jennifer Villalba
Summer 2019
06/20/2018
all methods dome and tested 
*/

#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"


int main(){
   char input[100]; //Strings do not exist on C so create a arrar of char
  //char* input = malloc(100 *sizeof *input); 
  printf(">");
  fgets(input, sizeof(input), stdin);
  char* in = malloc(sizeof(char) * (count_words(input) + 1));
  in = input;

  char** x;
  printf("Input --- %s \n", input);
  x = tokenize(in);
  print_tokens(x);
  free(input);
  
  
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
  //char val;
  if(c >= 33 && c <= 126)
    return  1;
  return  0;
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
    if(!is_valid_character(str[c])) {//if(str[c] == ' '){
      goto jump; // end loop here
    }
    c++;
  }
 jump:
  str = str + c;
  return str;
}

/* Counts the number of words in the string argument.*/ 
int count_words(char* str){ // ?? need to be tested more
  int c = 0;
  
  while(str[0] != '\0'){
    // Functions help to count by curing the word between the invalid characters such as a space
    str = find_word_start(str);
    str = find_word_end(str);
    c++;
  }
  return c;
}

/* Copies the next word in str to copy.*/ 
void copy_word(char* str, char* copy) {
  int len; // just need it the kength of the first word on the string 
  char* s = find_word_start(str);
  char* e = find_word_end(s);
  len = e - s;
  //copy = (char*) malloc(len+1); //plus one to add space to the terminator\0
  int c =0;
  // the word at the beggining is copy on the corresponding token 
  while(c < len){
    copy[c] = s[c];
    c++;
  }

}


/* Tokenizes the string argument into an array of tokens. 
   For example, "hello world string" would result in:
     tokens[0] = "hello"
     tokens[1] = "world"
     tokens[2] = "string" */
char** tokenize(char* str) {
  //count the words
  int words = count_words(str);
  // Create memory "it ssould be like a 2D array"
  char** tokens = (char**) malloc(sizeof(char*) *(words +1)); // need to create memoy for each of the words on the strings
  int c = 0; // counnter to go thorugh every word/token
  //loop to copy all the words to copy the words to tokens
  while(c < words){
    //it is need it to create memory for the lentgh of word on each token
    char* tmp1 = find_word_start(str);
    char* tmp2 = find_word_end(tmp1);
    int len = tmp2 - tmp1;
    
    tokens[c] = (char *) malloc((sizeof(char)) * (len) +1);
    copy_word(tmp1, tokens[c]);
    str = find_word_end(tmp1);
    c++;
  }
    return tokens;
}

/* Prints all tokens. */
void print_tokens(char** tokens){
  int c = 0;
  while(tokens[c] != NULL){
    printf("tokens[%d] = %s \n", c, tokens[c]);
    c++;
  }
  return;
}

/* Frees all tokens and the array containing the tokens */
void free_tokens(char** tokens){
  int c = 0;
  while(tokens[c] != NULL){
    free(tokens[c]);
    c++;
  }
  return;   
}

