#include "main.h"

/**
 * _isdigit - checks if character is a digit.
 *
 *@c: character to be checked.
 *
 *return: 1 for success, 0 for failure.
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
