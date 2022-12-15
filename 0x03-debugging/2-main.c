#include "main.h"

/**
 * main - prints the largest of 3 integers
 * Return: o
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	largest = largest(a, b, c);

	printf("% is the largest number\n", largest);

	return (0);

}
