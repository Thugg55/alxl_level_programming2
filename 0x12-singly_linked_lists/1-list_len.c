#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list.
 * @h: singly linked list
 * Return: Always 0
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	Return (n);
}
