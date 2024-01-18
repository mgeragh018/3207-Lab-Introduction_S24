/*Michael Geraghty
Lab Assignment 1, part 2
Create file called random.c
In file create a functio called randchar()
that returns a ranndom let in the alphabet*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//function returns a random chaar
char randchar(){
    
    int num_to_alph =(rand()%26);//produces a random number range 0-25
    
    char array[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    char rand_char = array[num_to_alph];//random character to be returned
    return rand_char;
}
