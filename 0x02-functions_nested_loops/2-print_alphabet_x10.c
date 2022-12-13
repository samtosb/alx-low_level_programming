#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 -> prints the lowercase alphabets return value code
 * Return: Always 0 (success) get value here from the command
 */

void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		-putchar('\n');
	}
}
