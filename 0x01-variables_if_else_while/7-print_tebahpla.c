#include <unistd.h>

/**
 * main - Entry point
 * Description: prints lowercase alphabets in reverse
 * Return: Always 0 (success)
 */

int main(void)
{
	int alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);

	}
	putchar('\n');

	return (0);

}
