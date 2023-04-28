#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Program frees a list
 * @head: head of linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *mycurrent_node;

	while ((mycurrent_node = head) != NULL)
	{
		head = head->next;
		free(mycurrent_node->str);
		free(mycurrent_node);
	}
}
