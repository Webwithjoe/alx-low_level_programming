#include "lists.h"

/**
 * add_nodeint_end - Func Adds new node at
 *                   end of a listint_t list.
 * @head: Pointer to the address of
 *        head of listint_t list.
 * @n: The int for new node to contain.
 *
 * Return: If function fails Return NULL,or
 *          address of the new element if otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;

	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}

	return (*head);
}
