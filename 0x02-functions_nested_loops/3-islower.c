#include "main.h"

/**
 * _islower - check if a char is lowercase
 * @c: is the char to be checked for the value
 * Return: On success 1.
 * On error, -1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
