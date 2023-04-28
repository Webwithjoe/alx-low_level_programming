#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds new node at beginning of list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list, otherwise NULL
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int mylen = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[mylen])
		mylen++;

	temp->len = mylen;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
