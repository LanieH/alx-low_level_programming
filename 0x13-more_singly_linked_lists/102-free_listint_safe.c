#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: Pointer to a pointer to the head
 *
 * Return: Number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		count++;
		current = tmp;

		if (tmp == *h)
		{
			*h = NULL;
			break;
		}
	}
	return (count);
}
