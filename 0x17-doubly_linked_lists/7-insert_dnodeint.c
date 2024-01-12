#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at,
 * a given position.
 * @h: pointer to pointer to the h of linked list.
 * @ind: index of the list where the new  node should be added.
 * @n: value of the new node.
 *
 * if it is not possible to add the new node at index ind, do not,
 * add the new node and return NULL.
 *
 * Return:  the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int ind, int n)
{
	dlistint_t *new_node;
	dlistint_t *h;
	unsigned int i;

	new_node = NULL;
	if (ind == 0)	/* insert node at beginning of list */
		new_node = add_dnodeint(h, n);
	else
	{
		h = *h;
		i = 1;
		if (h != NULL)
			while (h->prev != NULL)
				h = h->prev;
		while (h != NULL)
		{
			if (i == ind)
			{
				/* insert note at the end of list */
				if (h->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = h->next;
						new_node->prev = h;
						h->next->prev = new_node;
						h->next = new_node;
					}
				}
				break;
			}
			h = h->next;
			i++;
		}
	}
	return (new_node);
}


