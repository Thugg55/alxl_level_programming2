#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: beginning pointer of the linked list
 * @str: list string
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	size_t nc;

	n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);

	n->str = strdup(str);

	for (nc = 0; str[nc]; nc++)
		;

	n->len = nc;
	n->next = *head;
	*head = n;

	return (*head);
}
