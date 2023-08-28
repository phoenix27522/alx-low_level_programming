#include "lists.h"
/**
 * add_nodeint_end - adds node at the list of the node.
 * @head: pints to the start of the node
 * @n: valve to be
 *
 * Return: adress of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;

	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
