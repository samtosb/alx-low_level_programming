#include "main.h"

#include <unistd.h>

/**
 * print_alphabet - entry point
 *
 * Return: Always 0 (success) return the value
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');

}
