#include "main.h"

/**
 * print_alphabet - make alphabets 10 times.
 */

void print_alphabet_x10(void)
{ 
	int n;
	for (n = 0; n <= 9; n++)
	{ 
		char c;
			for (c = 'a'; c <= 'z'; c++)
				_putchar(c);
	 _putchar('\n');
	}
}
