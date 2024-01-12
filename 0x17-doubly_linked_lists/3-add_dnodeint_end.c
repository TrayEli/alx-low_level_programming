#include "lists.h"

/**
 * add_dnodeint_end - function that adds node at the end of a list.
 * @h: pointer to pointer to h of list.
 * @n: data to be added.
 *
 * Return: address of the new element or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **h, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = NULL;

	last = *h;

	if (*h == NULL)
	{
		new_node->next = *h;
		*h = new_node;
	}
	else
	{

		last->next = new_node;
	}
	new_node->prev = last;

	return (new_node);
}

