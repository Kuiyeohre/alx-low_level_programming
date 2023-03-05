#include "main.h"

/**
 *_isupper - cheak if integer is upper letter.
 *
 *@x : the integer to be checked.
 *
 *return: 1 for success, 0 for failure.
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
