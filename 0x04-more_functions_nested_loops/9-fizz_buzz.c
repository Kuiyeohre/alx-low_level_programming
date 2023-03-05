#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point.
 *
 * @n: integer.
 *
 * return: always 0, success.
 *
 */

int main(void)
{
	int n;
	for (n = 1; n <= 100; n++)
	{ if (n % 3 == 0 && n % 5 == 0)
		{	
			printf("FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d ", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
