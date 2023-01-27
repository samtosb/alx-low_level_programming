#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * print_list - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of the list
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
