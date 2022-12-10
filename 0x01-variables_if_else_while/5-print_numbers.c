#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - returns alphabets with num
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char c = '0';
	/* code in here */
	while (c <= '9')
	{
		putchar(c);
		c++;
	}


	putchar('\n');
	return (0);

}
