#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: Pointer to the  first element in the list
 * @n: data to store in the new element
 *
 * Return: A pointer to the new node, or NUKK if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new;
	return (new);
}
