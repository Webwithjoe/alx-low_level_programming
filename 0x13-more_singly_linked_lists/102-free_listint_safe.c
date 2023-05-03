#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list
 * @h: A pointer to the address of the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t mycount = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	/*Using while Loop*/
	while (current != NULL)
	{
		mycount++;
		next = current->next;
		free(current);
		if (next <= current)
		{
			*h = NULL;
			exit(98);
		}
		current = next;
	}

	*h = NULL;
	return (mycount);
}
