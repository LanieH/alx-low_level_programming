#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node at a specified point
 * in a linked list.
 * @head: pointer to the first node in the list
 * @idx: index of the newly inserted node
 * @n: data to be store in the new node
 *
 * Return: Address to the new node,or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	for (i = 0; temp != NULL && i < idex - 1; i++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
