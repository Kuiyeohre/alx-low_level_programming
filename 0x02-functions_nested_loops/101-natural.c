#include <stdio.h>

/**
 * main - prints all the sum of multiples of 3 and 5 upto 1024
 *
 * return: always (0)
 *
 * @0: success
 *
 * @i: integer
 *
 * @z: integer
 *
 */

int main(void)
{
	int i, z;
	z = 0;
	while (i < 1024)
	{
	if ((i % 3 == 0) && (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d\n", z);
	return (0);
}
