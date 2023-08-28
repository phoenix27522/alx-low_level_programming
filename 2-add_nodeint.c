#include "lists.h"
/**
 * add_nodeint - adds node to the beginning
 * @head: double pointer to the start of the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
