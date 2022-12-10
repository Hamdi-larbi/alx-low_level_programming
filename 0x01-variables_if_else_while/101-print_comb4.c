#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible different combinations of three digits
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int sum;

	for (i = 0; i < 8; i++)
	{
		for (j = 1 + i; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				sum = i * 100 + j * 10 + k;
				if (sum < 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
