#include "lists.h"

/**
 * reverse_listint - Program that Reverses a listint_t list.
 *
 * @head: Pointer to address of
 *        the head of list_t list.
 *
 * Return: A pointer to node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
