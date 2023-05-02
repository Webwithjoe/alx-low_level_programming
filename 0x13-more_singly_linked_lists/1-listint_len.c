#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function returns num of elements
 *               in a linked listint_t list.
 * @h:  Pointer to head of the listint_t list.
 *
 * Return: Number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t mynodes = 0;

	while (h)
	{
		mynodes++;
		h = h->next;
	}

	return (mynodes);
}
