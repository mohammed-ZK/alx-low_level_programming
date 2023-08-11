#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0 is (Success)
*/

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
