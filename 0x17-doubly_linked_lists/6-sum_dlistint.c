#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a dlistint_t list.
 * @h: The h of the dlistint_t list.
 *
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *h)
{
	int sum = 0;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);
}


