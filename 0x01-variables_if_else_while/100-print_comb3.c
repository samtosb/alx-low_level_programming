#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - print all possible different combination of two digits.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* prints tens digit*/
	{
		for (ones = '0'; ones <= '9'; ones++)/* prints ones digit*/
		{
			if (!((ones == tens) || (tens > ones)))/*eliminates repitition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '0' && tens == '8'))/*addes commas and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);

}
