#include <stdio.h>

/**
 * main - entry input
 * Description: prints all possible different combinations of two digits
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;
	int sum;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			sum = i * 10 + j;
			if (sum < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
