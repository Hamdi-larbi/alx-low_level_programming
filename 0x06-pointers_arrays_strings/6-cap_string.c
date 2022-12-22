#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	char c[] = " \t\n,;.!?\"(){}";
	int i = 0, j;

	while (*(s + i) != '\0')
	{
		if (i == 0)
		{
			if (*(s + i) >= 'a' && *(s + i) <= 'z')
			{
				*(s + i) = *(s + i) - 32;
			}
		}
		else
		{
			for (j = 0; c[j]; j++)
			{
				if (*(s + i - 1) == c[j] && *(s + i) >= 'a' && *(s + i) <= 'j')
				{
					*(s + i) = *(s + i) - 32;
				}
			}
		}
		i++;
	}
	return (s);
}
