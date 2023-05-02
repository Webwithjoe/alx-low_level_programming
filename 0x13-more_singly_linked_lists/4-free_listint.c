#include "lists.h"

/**
 * free_listint - This Frees a listint_t list.
 * @head: POINTER to head of listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	/*using a for loop*/
	for (listint_t *tmp = head; head != NULL; tmp = head)
	{
		head = head->next;
		free(tmp);
	}
}

