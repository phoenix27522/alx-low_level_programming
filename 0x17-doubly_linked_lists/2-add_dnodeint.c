#include "lists.h"
/**
 * add_dnodeint - addes node at the begining
 * @head: points to struct
 * @n: new data
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t * temp;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->prev = NULL;
	temp->n = n;

	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;

	*head = temp;

	return (temp);
}
