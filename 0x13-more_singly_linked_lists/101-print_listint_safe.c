#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *previous_nod = NULL;
	const listint_t *current_nod = NULL;
	size_t counter = 0;
	size_t new_node;

	previous_nod = head;
	while (previous_nod)
	{
		printf("[%p] %d\n", (void *)previous_nod, previous_nod->n);
		counter++;
		previous_nod = previous_nod->next;
		current_nod = head;
		new_node = 0;
		while (new_node < counter)
		{
			if (previous_nod == current_nod)
			{
				printf("-> [%p] %d\n", (void *)previous_nod, previous_nod->n);
				return (counter);
			}
			current_nod = current_nod->next;
			new_node++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
