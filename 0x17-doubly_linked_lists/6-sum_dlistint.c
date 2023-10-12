#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - ades all the list
 * @head: a pointer to the struct
 *
 * Return: the sum
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
