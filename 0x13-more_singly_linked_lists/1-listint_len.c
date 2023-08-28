#include "lists.h"
/**
 * listint_len - prints the number elements in a list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nods
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
