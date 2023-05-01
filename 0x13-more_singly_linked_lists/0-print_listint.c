#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @m: list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *m)
{
	size_t num_nodes = 0;

	while (m != NULL)
	{
		printf("%d\n", m->n); /* autofills 0 if no int value given */

		num_nodes += 1;
		m = m->next;
	}

	return (num_nodes);
}
