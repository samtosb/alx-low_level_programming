#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets return 10 times
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char la;

	while (count++ <= 9)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		-putchar('\n');
	}
}
