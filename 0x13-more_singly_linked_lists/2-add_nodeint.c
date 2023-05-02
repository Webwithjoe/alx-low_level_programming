#include "lists.h"

/**
 * add_nodeint - Add new node at the beginning
 *               of listint_t list.
 * @head: This is pointer to address of
 *        head of the listint_t list.
 * @n: int for new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
