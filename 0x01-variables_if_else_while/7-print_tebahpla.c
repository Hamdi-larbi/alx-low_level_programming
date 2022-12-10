#include <unistd.h>

/**
 * main - Entry point
 * Description: prints lowercase alphabets in reverse
 * Return: Always 0 (success)
 */

int main(void)
{
	char ab;

	for (ab = 'z'; ab >= 'a'; ab--)
	{
		putchar(ab);
	}
	putchar('\n');

	return (0);
}
