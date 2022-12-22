#include "main.h"

/**
 * print_number - Prints any integer with putchar
 * @n: Number to prints
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	x = n;
	
		print_number(x / 10);
	_putchar(x % 10 + '0');

}
