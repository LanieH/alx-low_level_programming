#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the node at a given index in a linked list
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve
 *
 * Return: Pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
