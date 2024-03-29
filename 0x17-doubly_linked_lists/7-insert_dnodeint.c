#include "lists.h"
#include <string.h>

/**
 * insert_dnodeint_at_index - insert node at specific index
 * @h: head of linked list
 * @idx: index of new node
 * @n: new node value
 * Return: inserted node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = 0, i;
	dlistint_t *new_node, *tmp, *current;

	current = *h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}

	if (idx >= len)
		return (*h);

	tmp = *h;
	i = 0;

	while (i < idx - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (idx == 0)
		add_dnodeint(h, n);

	else if (tmp == current)
		add_dnodeint_end(h, n);

	else if (tmp != NULL)
	{
		new_node = malloc(sizeof(dlistint_t));
		new_node->n = n;
		new_node->next = tmp->next;
		new_node->prev = tmp;

		if (tmp->next != NULL)
			tmp->next->prev = new_node;
	}

	return (new_node);
}
