#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - This Frees a listint_t list.
 * @head: POINTER to head of listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
