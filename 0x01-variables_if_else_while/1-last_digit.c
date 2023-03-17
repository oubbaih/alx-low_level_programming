/*
 * File: 0-positive_or_negative.c
 * Auth: Lahcen Oubbaih
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -   print the last digit of the number stored in the variable n
 *
 * Return: Always 0.
*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
	}

	return (0);

}
