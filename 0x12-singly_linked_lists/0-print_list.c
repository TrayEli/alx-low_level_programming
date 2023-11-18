#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)

{
	size_t node_count = 0;
	
	for (; h != NULL; h = h->next, node_count++)
        {
                printf("[%u] %s\n", h->len, h->str);
        }
        return (node_count);
}
