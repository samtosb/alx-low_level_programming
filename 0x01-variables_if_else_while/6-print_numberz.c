
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - returns from 0, followed by new line.
 *
 * Return: always 0 (success)
 */

int main(void)
{
        char c = 0;
        /* code in here */
        while (c < 10)
        {
                putchar(48 + c);
                c++;
	}
	putchar('\n');
      	return (0);

}
