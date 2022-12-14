#include "main.h"

 /**
 * print_last_digit - computes the last value of an int
 * @n: the integer to in question
 * Return: the last_digit of the int.
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
