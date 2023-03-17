/*
 * File: 0-positive_or_negative.c
 * Auth: Lahcen Oubbaih
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*
 * main - Prints a random number and states whather 
 * 	is positive or negative or zero
 *
 * 	Return: Always 0.
 */


/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if(n>0)
		printf("%d is positive\n",n);
	if(n<0)
		printf("%d is negative\n",n);
	else
		print("%d is zero\n",n);

	return (0);
}

