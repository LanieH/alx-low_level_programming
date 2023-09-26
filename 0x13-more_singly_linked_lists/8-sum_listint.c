#include "lists.h"

/**
 * sum_listint - returns the total of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: Sum of all the data (n) in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
