#include "main.h"

/**
 * print_numbers - print 0123456789
 * owned by Samtosb
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_puchar(c);
	}
	_putchar('\n');
}
