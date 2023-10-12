#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - print the list
 * @h: a pointer to the struct
 *
 * Return: the length
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		/*printf("%d\n", h->n);*/
		h = h->next;
		count++;
	}
	return (count);
}
