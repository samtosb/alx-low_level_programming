#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 -> prints the lowercase alphabets return value code
 * Return: Always 0 (success) get value here from the command
 */

void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten < 10; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
		{
			_putchar(la);
		}
		-putchar('\n');
	}
}
