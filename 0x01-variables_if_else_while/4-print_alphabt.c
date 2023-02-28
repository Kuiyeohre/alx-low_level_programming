#include <stdio.h>

/**
 * main - Entry point
 * return: Always 0 (success)
 */

int main(void)
{
	char lie, e, q;
	e = 'e';
	q = 'q';
	for (lie = 'a'; lie <= 'z'; lie++)
	{if (lie != e && lie != q)
		putchar(lie);
	} putchar('\n');
	return (0);
}
