#include "main.h"

/**
 * print_square - prints out a square.
 *
 * @size: character representing size of the square.
 *
 * @x: character representing dimension of square.
 *
 * @y: character representing dimension of the square.
 *
 */

void print_square(int size)
{
	int x, y;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
		for (y = 0; x < size; y++)
		{
		_putchar(35);
		}
		_putchar('\n');
		}
		}
}		
