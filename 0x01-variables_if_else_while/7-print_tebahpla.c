#include <stdio.h>

/**
 * main - Prints alphabets in reverse
 * return: always 0 (success)
 */

int main(void)
{
	char boy;
	for (boy = 'z'; boy >= 'a'; boy--)
		putchar(boy);
	putchar('\n');
	return (0);
}
