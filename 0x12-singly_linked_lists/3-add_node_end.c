#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at end
 * of a list_t list.
 * @head: head of linked list.
 * @str: string to store in list.
 * Return: address of head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *mynew_node, *current_node;
	size_t n;

	mynew_node = malloc(sizeof(list_t));
	if (mynew_node == NULL)
		return (NULL);

	mynew_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	mynew_node->len = n;
	mynew_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = mynew_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = mynew_node;
	}

	return (*head);
}
