#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: Pointer to the first node in the list
 *
 * Return: A pointer to the first node in the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
