---
subtitle: 'Due Date: Friday October 5th, 2018'
title: 'Lab Project 1: Building a Tokenizer'
---

Overview
========

#### 

Your objective for the first lab project is to build a tokenizer that
maintains a history. Tokenizing is the process of dividing a string into
tokens by some delimeter (e.g. the string librarys split() function).
Consider tokenizing the string “The cake is a lie!” using the space
character. This would result in: \[“The”, “cake”, “is”, “a”, “lie!”\].

When designing your functions, it is important to consider situations
where a string is not constructed ideally. In other words, what would
happen if your tokenizer encountered a string which contained multiple
delimeters between each token? For example, using a space as a delimeter
and accepting the following string as input, “Oh hi there”, would result
in \[“Oh”, “hi”, “there”\].

Lastly, your tokenizer should maintain a history. A good example of this
is the bash command, ; or, something similar to below:

1.  The cake is a lie!

2.  But it was delicious.

3.  True.

You should be able to recall a certain history item by using a command
similar to ’!3’. This would then use the string “True” as input and
tokenize.

Building a Simple UI
====================

#### 

The first milestone for your project is to complete a simple functioning
user interface (which means it does not have to be anything fancy). It
should have an indicator on the left to notify the user that the program
is ready to receive input. For example:

#### 

` this would work`

#### 

` or even this`

#### 

At this point of the project, your program should just echo the input
back to the user.

#### 

=` my fancy interface thing my fancy interface thing`

Working with Strings
====================

#### 

At this point, you will be provided with a repository containing two
header files, **tokenizer.h** and **history.h**. You should explore the
contents of each file so that you are familiar with the instructions to
follow.

#### 

The second milestone of your project is to define several of the
functions contained in the tokenizer.h file:

1.  `int stringlength(char*);`

2.  `char isvalidcharacter(char c);`

3.  `int findwordstart(char*, int);`

4.  `int findwordend(char*, int);`

5.  `int countwords(char*);`

#### 

Each function definition should appropriately use the arguments and
return the correct type declared in the method signature. **You should
not modify these method signatures.** Inside the header file you will
find helpful comments explaining the purpose of each function. Lastly,
you are not allowed to use any libraries except for stdio.h and stdlib.h
in your source code (this includes string.h).

Dealing with Memory Allocation
==============================

#### 

The third milestone of your project will require you to allocate and
free memory. Going back to the **tokenizer.h** file, you are now going
to define the following functions:

1.  `void printtokens(char**);`

2.  `void freetokens(char**);`

#### 

To test your functions, you should hardcode the allocation of an array
of strings (char\*\*).

Putting it All Together
=======================

#### 

Now that you have all the pieces for the tokenizer defined, the last
part is to put them together and define the tokenizer:

1.  `char** tokenize(char*);`

#### 

As explained in the Overview, the tokenize method should accept a string
of characters as input and return an array of tokens. It is important to
understand that you must determine the amount of tokens prior to
allocating space for the array, and similarly with each token.

Maintaining History
===================

#### 

The final milestone of the project is to build the history component.
The history can be represented as a linked list data structure, with
each node containing:

1.  the string entered by user

2.  the length of string

3.  the sequence number

#### 

Additionally, the user should be able to view the history.
er
