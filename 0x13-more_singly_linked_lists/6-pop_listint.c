#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: pointer to the first elements in the linked list
 *
 * Return: Data stored inside the deleted elements
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	temp = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = temp;

	return (num);
}
