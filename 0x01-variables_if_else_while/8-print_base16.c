#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * return: Always 0 (success)
 */

int main(void)
{
	int d;
	char ko;
	for (d ='0'; d <= '9'; d++)
		putchar(d);
	for (ko = 'a'; ko <= 'f'; ko++)
		putchar(ko);
	putchar('\n');
	return (0);
}
