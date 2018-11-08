#include <assert.h>
#include <string.h>
#include "tokenizer.h"

/*
    The following is a simple testing script with a single example of input
    your code is expected to handle. The testing of your code should be more
    thorough and explore other input cases.
*/

int main() {
    char* s = "  happy happy joy joy";
    
    assert(is_valid_character(*s) == 0);
    assert(is_valid_character(s[2]) == 1);

    char* adj = find_word_start(s);
    assert(*adj == 'h');
    adj = find_word_end(adj);
    assert(*adj == ' ');

    assert(count_words(s) == 4);

    char** tokens = tokenize(s);
    assert(strcmp(tokens[0], "happy") == 0);
    assert(strcmp(tokens[1], "happy") == 0);
    assert(strcmp(tokens[2], "joy") == 0);
    assert(strcmp(tokens[3], "joy") == 0);
}