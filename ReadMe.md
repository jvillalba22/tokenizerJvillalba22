##Lab Project 1: BULDING A TOKENIZER##

***SimpleUI***

SimpleUI is just a simple interface that reads what the user writes and then
printed ultil the input is empty.
I created a array size 100 (just to give space to a long string)
Then I am using fgets to read the input then just print it.
all is inside a loop  that when it reads '\0' it stop
    - It is looking for c[1] != '\0' because it will never stop if we look for
    c[0].May be because it takes the enter as an space (space != '\0') so it
    keeps going.
 Ex:
  > $User Enter here
 
 >User Enter Here


***Tokenizer***


.c cointains the function with all the work.
.h just declare the functions.

First 5 methods are workig with strings
   
   **string_length**
	The method have to count the characters in the string.
	First there is a counter then a loop that it stops when char[counter]
      == '\0' then the counter is return.


   **is_valid_character**
        it just check is c it between the ASCII numbers 33-126 if it is then
        is valid and return 1. Otherwise 0.


   **find_word_start**
	Finds the next word in the string -- Meaning it look for not valid
	chars at the beggining of the string and will return the strings from
	the first valid to last of string.
	So a counter will count the not valid until valid then add it to the
	string.


   **find_word_end**
	Find the end of the current word -- Meaning erase first word of sring
	or look for first not valid and erase everyting before that.
	I have a loop that itenerate ultil '\0' and add to cunter unless a not
	valid is found then out of loop and add that to the string.









