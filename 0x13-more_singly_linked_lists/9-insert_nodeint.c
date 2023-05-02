#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at idx position.
 * @head: Pointer to a pointer to first node of list.
 * @idx: Index of list where new node should be added.
 * @n: INTEGER value to be stored in the new node.
 *
 * Return: Address of new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	for (a = 0; a < (idx - 1) && temp != NULL; a++)
	temp = temp->next;

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
