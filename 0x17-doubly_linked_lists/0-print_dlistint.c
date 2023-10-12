#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - print the list
 * @h: a pointer to the struct
 *
 * Return: all the value of the list
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
