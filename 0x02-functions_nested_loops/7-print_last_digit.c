#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int dgt)
{

	int dgt;

	dgt = (dgt % 10);

	if (dgt < 0) 
	{
		dgt = (-1 * dgt);
	}

	_putchar(dgt + '0');

	return (dgt);
}
