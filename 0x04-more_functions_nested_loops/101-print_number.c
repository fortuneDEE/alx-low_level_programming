#include "main.h"
/**
 * print_number - prints an integer
 * @n: input integer parameter
 *
 * Return: always 0
 */

void print_numbers(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_numbers(i / 10);
	}
	_putchar(i % 10 + '0');
}
