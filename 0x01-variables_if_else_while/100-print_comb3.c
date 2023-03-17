/*
 * File: 100-print_comb3.c
 * Auth: Lahcen Oubbaih
 */
#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits.
 *
 * Return: Always 0.
*/
int main(void)
{       
        int dig_1, dig_2;
        
        for (dig_1 = 0; dig_2 < 9; dig_1++)
        {       
                for (dig_2 = dig_1 + 1; dig_2 < 10; dig_2++)
                {       
                        putchar((dig_1 % 10) + '0');
                        putchar((dig_2 % 10) + '0');

			if (dig_1 == 8 && dig_2 == 9)
				continue;

			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');
	
	return (0);
}
