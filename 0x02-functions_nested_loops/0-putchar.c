# include "main.h"

/**
 * main - write char
 * Description: location of char
 * Return: 1 if success
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar("\n");

	return (0);
}
