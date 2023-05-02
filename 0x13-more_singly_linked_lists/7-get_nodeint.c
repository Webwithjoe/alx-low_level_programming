#include "lists.h"

/**
 * get_nodeint_at_index - FUNC help Locates a given node of
 *                        a listint_t linked list.
 *
 * @head: Pointer to head of listint_t list.
 * @index: The index of the node to locate - start 0.
 *
 * Return: If node does not exist - NULL.
 *         Otherwise RETURN the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	/* Using a for loop*/
	for (node = 0; node < index; node++)
	{
		if (head == NULL)
		return (NULL);

		head = head->next;
	}

	return (head);
}
