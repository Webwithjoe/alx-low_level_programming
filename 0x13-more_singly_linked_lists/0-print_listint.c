#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Program prints all elements of listint_t list.
 * @h:  Pointer to the head of list_t list.
 *
 * Return: number of nodes in list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t mynodes = 0;

	while (h)
	{
		mynodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (mynodes);
}
