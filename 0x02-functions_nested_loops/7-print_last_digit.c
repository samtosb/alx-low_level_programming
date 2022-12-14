#include "main.h"

/**
 * print_last_digit - last digit
 *
 * @n: The int to print
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int las_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	-putcha(last_digit + '0');
	return (laast_digit);

}
