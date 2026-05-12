# CS50 Week 1 - C Projects

A collection of simple C programs developed for the CS50 course.

## Mario More ##

A simple C program developed for the CS50 course.

This program asks the user for a height between 1 and 8 and prints two side-by-side pyramids using hashes (#), similar to the pyramids from Super Mario Bros.

Technologies:
- C
- CS50 Library

How to compile:
clang mario.c -o mario -lcs50

How to run:
./mario

Example:
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####

What I learned:
- for loops
- nested loops
- user input handling
- basic C syntax


## Credit

A simple C program that checks whether a credit card number is valid and determines its type (AMEX, MASTERCARD, VISA).

This program uses Luhn’s Algorithm to validate credit card numbers and identifies the card type based on its prefix and length.

Technologies:
- C
- CS50 Library

How to compile:
clang credit.c -o credit -lcs50

How to run:
./credit

Example:
Number: 378282246310005
AMEX

What I learned:
- conditional statements (if / else)
- Luhn’s Algorithm
- input validation
- problem decomposition
