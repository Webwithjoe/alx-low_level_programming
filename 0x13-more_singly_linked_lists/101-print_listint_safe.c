#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list,
 * @head: pointer to head of the linked list
 *
 * Return: Number of nodes in linked list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
	size_t mycount = 0;

	if (head == NULL)
	exit(98);

	slow = head;
	fast = head->next;

	while (fast != NULL && fast < fast->next)
	{
	printf("[%p] %d\n", (void *)slow, slow->n);
	mycount++;

	slow = slow->next;
	fast = fast->next->next;
	}

	printf("[%p] %d\n", (void *)slow, slow->n);
	mycount++;

	if (fast != NULL)
	{
	printf("-> [%p] %d\n", (void *)fast, fast->n);
	mycount++;
	}

	return (mycount);
}
