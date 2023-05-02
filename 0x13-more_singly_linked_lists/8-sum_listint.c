#include "lists.h"

/**
 * sum_listint - EVALUATES sum of all the
 *               data (n) of a listint_t list.
 * @head: Pointer to head of the listint_t list.
 *
 * Return: 0 If the list is empty.
 *         Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	/*While loop*/
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
