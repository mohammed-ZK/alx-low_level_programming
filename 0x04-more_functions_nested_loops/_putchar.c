# include <unistd.h>
# include "main.h"

/**
 * _putchar - write char
 * @c: location of char
 * Return: 1 if success
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
