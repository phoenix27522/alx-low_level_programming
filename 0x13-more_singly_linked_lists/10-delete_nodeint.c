#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_nod = *head;
	listint_t *current_nod = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(previous_nod);
		return (1);
	}

	while (i < index - 1)
	{
		if (!previous_nod || !(previous_nod->next))
			return (-1);
		previous_nod = previous_nod->next;
		i++;
	}


	current_nod = previous_nod->next;
	previous_nod->next = current_nod->next;
	free(current_nod);

	return (1);
}
