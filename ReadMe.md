# **Lab Project 1: BULDING A TOKENIZER**  <h1>

# ***SimpleUI*** <h2>

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


# ***Tokenizer*** <h2>


.c cointains the function with all the work.
.h just declare the functions.

First 5 methods are workig with strings
   
  *  **string_length**
	The method have to count the characters in the string.
	First there is a counter then a loop that it stops when char[counter]
      == '\0' then the counter is return.


  *  **is_valid_character**
        it just check is c it between the ASCII numbers 33-126 if it is then
        is valid and return 1. Otherwise 0.


  *  **find_word_start**
	Finds the next word in the string -- Meaning it look for not valid
	chars at the beggining of the string and will return the strings from
	the first valid to last of string.
	So a counter will count the not valid until valid then add it to the
	string.


  * **find_word_end**
	Find the end of the current word -- Meaning erase first word of sring
	or look for first not valid and erase everyting before that.
	I have a loop that itenerate ultil '\0' and add to cunter unless a not
	valid is found then out of loop and add that to the string.	

  * **count_words**
   	It is a straigh foward funtions that count the words in the string given.
	Clearly I am using a counter and a loop until string is empty. I use the 	help of find_word start and end. for example the string is My name, first 	loop will just leave " name" and count = 1 then next loop will leave string 	empty and count = 2 then out of loop.

The next two methods are the first ones to deal with Memory Allocation.

  * **print_tokens**
   	This function will hace as parameter char** tokens. I understand this double ** pointer as a 2D array. The function just have a loop and print each token.
  * **free_tokens**
   	This function just leave tokens empty. So loop until loop then call free method with token in each index.
	
   * **tokenize**
   	This function is the one that separate the words on the string then  it separate them on each of the tokens. First I count the words of the string. then a loop 
   	for each of the words. I use end and start to find the length of the current word.
	
   * **copy_word**
   	This function is helping tokenize to copy the current word (in the loop on the function above) and copy it on the corresponding token.
	
# ***History*** <h2>

This part of the project is a basic linked list that will make a list of strings. 
			*   **add_history**
			*   **get_history**
			*   **print_history**
			*   **free_history**
		
	
# ***Interface*** <h2>
	
I am using this code to put all together.  The simpleUi to read the inputs from the user. Then everytging should be added on history. Then I use print history to show what the user input on the list. Then we get history I get a certain strign on the list.  
	
	
	
> The example shloud be that the use can input as many strings and they should be added to the history and it would stop with a symbol like !# the # is the string to get. However there is a problem somewhere and is just getting save the last string on all the list.
	


when I get the string I use tokenizer to tokenize the word. Then at the end free the list again.
	









