#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - returens alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch = 'a';
	/* new code */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);

}


