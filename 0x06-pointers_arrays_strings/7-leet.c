#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string to encode
 * Return: encoded string
 */

char *leet(char *s)
{
	char a[] = "aAeEoOtTlL";
	char n[] = "4433007711";
	int i = 0, j;

	while (*(s + i) != '\0')
	{
		for (j = 0; a[j]; j++)
		{
			if (a[j] == *(s + i))
			{
				*(s + i) = n[j];
			}
		}

		i++;
	}
	return (s);
}
