/*Michael Geraghty
Lab Assignment 1
Create file called random.c
In file create a functio called randchar()
that returns a ranndom let in the alphabet*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.c"


int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}

