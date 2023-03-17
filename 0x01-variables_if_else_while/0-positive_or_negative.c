/*
 * File: 0-positive_or_negative.c
 * Auth: Lahcen Oubbaih
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 *description: main - Prints a random number and states whather is positive or negative or zero
 *return: Always 0.
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
