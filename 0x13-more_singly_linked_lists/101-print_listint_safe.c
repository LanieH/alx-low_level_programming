#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linkrd list safely
 * @head: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current = head;
	const listint_t *prev_nodes[1024];

	while (current != NULL)
	{
		size_t i;

		for (i = 0; i < node_count; i++)
		{
			if (prev_nodes[i] == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (node_count);
			}
		}

		prev_nodes[node_count] = current;
		printf("[%p] %d\n", (void *) current, current->n);
		node_count++;

		current = current->next;
	}
	return (node_count);
}
