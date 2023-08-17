#include <stdio.h>

/**
 * _isupper - check c is upper case
 * @c: input c
 *
 * Return: 1 if true or 0 to false
*/

int _isupper(int c)
{
	if (c > 65 && c < 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
