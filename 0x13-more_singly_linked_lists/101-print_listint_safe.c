#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*func declaration*/
size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);

/**
 * print_listint_safe - prints a listint_t linked list,
 * @head: pointer to head of the linked list
 *
 * Return: Number of nodes in linked list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t mynodes, index = 0;

	mynodes = looped_listint_len(head);

	if (mynodes == 0)
	{
		for (; head != NULL; mynodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < mynodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (mynodes);
}

/**
 * looped_listint_len - FUNC Counts number of unique nodes
 *                      in  looped listint_t linked list.
 * @head: Pointer to the head of listint_t to check.
 *
 * Return: When list is not looped - 0.
 *         Otherwise - the num of unique nodes in list.
 */
size_t looped_listint_len(const listint_t *head)
{
	/* Tortoise...Hare Algorithm */
	const listint_t *tortoise, *hare;
	size_t mynodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				mynodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				mynodes++;
				tortoise = tortoise->next;
			}

			return (mynodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}
