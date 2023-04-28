#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - function show number of elements of a list
  * @h: A linked list
  *
  * Return: Number of elements of a list
  */
size_t list_len(const list_t *h)
{
	size_t mycount = 0;

	while (h)
	{
		h = h->next;
		mycount++;
	}

	return (mycount);
}
