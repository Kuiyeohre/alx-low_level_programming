 #include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * 
 * @n: integer to be printed
 *
 * void: return function of print_numbers
 *
 */

void print_numbers(void)
{
	int n;
	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
