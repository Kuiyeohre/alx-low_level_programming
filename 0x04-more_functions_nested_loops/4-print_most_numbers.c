#include "main.h"

/**
 * print_most_numbers - prints out characters
 *
 * @n: characteer to be printed
 *
 * void: return value of print_most_numbers
 */

void print_most_numbers(void)
{
	int n;
	for (n = 48; n <= 57; n++)
	{
		if (n != 50 && n != 52)
		_putchar(n);
	}
	_putchar('\n');
}
