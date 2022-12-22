#include "main.h"

/**
 * rot13 - function that encodes a string into root13
 * @s: string to encode
 * Return: encoded sting
 */

char *rot13(char *s)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0, j;

	while (*(s + i) != '\0')
	{
		for (j = 0; a[j]; j++)
		{
			if (a[j] == *(s + i))
			{
				*(s + i) = n[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
