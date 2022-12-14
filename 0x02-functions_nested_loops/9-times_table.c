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
			if (prod < 10)
			{
				putchar(prod + '0');
			}
			else
			{
				putchar((prod / 10) + '0');
				putchar((prod % 10) + '0');
			}
			if (mult < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
