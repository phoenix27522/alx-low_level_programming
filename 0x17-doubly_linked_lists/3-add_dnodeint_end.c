#include "lists.h"
/**
 * add_dnodeint_end - addes node at the end
 * @head: points to struct
 * @n: new data
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *current;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = temp;
	temp->prev = current;

	return (temp);
}
