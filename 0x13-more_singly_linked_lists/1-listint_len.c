#include "lists.h"
/**
 * listint_len - the number of elemeents in a linked listint-t list
 *
 * @h: head pointer
 *
 * Return: the number of elements
 *
 */
size_t listint_len(cont listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
