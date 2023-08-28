#include "lists.h"
/**
 * free_listint2 - free the memory of the list
 * @head: struct to be freed
 */
void free_listint2(listint_t **head)
{
        listint_t *current;

	if (head == NULL)
		return;

        while (head)
        {
                current = (*head)->next;
                free(*head);
                *head = current;
        }

	*head = NULL;
}
