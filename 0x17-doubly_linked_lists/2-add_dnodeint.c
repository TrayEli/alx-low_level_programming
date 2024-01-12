#include "lists.h"

/**
 * add_dnodeint - function that adds new node at begininning of a dbly,
 * linked list.
 * @h: pointer to pointer to head of list.
 * @n: data to be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t *new_node;


	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = *h;

	new_node->prev = NULL;

	if ((*h) != NULL)
		(*h)->prev = new_node;

	(*h) = new_node;

	return (new_node);
}
