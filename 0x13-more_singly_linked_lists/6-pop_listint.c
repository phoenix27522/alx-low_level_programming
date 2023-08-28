#include "lists.h"
/**
 * pop_listint - removes the first from the list
 * @head:  pointer to the first element
 * Return: the value of the head
 */
int pop_listint(listint_t **head)
{
	int num;

	listint_t *current;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (num);
}
