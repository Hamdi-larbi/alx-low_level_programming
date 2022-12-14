#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			prod = num * mult;
			putchar(prod + '0');
			if (mult < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
