#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible combinations of two two-digit numbers
 * Return: always 0
 */

int main(void)
{
	int i, j, k, l;
	int sum;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (i * 10 + j < k * 10 + l)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
						sum = i * 1000 + j * 100 + k * 10 + l;
						if (sum < 9899)
						{
						putchar(',');
						putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
