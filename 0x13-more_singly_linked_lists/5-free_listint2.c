#include "lists.h"

/**
 * free_listint2 - Func to free a listint_t list.
 * @head: Pointer to address of
 *        head of the listint_t list.
 *
 * Description: Set head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
