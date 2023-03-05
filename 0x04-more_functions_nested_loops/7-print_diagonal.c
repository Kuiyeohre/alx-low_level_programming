#include "main.h"

/**
 * prints_diagonal - draws a digonal line
 *
 * @x: draws line
 *
 * @y: drwas space
 *
 * @n: character that determines position of line
 *
 */

void print_diagonal(int n)
{
	int x, y;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
		
	}
}
