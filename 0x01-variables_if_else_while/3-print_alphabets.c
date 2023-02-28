#include <stdio.h>


/**
 * main - Entry point
 * return: Always 0 (success)
 */

int main(void)
{
	char pig;
	for (pig = 'a'; pig <= 'z'; pig++)
		putchar(pig);
	for (pig = 'A'; pig <= 'Z'; pig++)
		putchar(pig);
	putchar('\n');
	return (0);
}
