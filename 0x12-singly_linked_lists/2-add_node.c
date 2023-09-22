#include "lists.h"

/**
 * add_node - adds new node at the start of a list.
 * @head: Head of list.
 * @str: String duplicated and added to the new node.
 *
 * Return: The address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *str_copy;
	size_t len = 0;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->str = str_copy;
	new_copy->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
