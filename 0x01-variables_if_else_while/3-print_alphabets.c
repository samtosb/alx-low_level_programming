#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - returns alphabets both lower and upper cases
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';
	/* this is the code */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
