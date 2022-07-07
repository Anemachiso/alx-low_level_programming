#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at specific index
 * @h: head of linked list
 * @idx: index of new node
 * @n: new node value
 * Return: inserted node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	int tmp = idx;
	dlistint_t *current;
	dlistint_t *new;

	if (h == NULL)
		return (0);

	current = *h;

	while (tmp != 0)
	{
		current = current->next;
		tmp--;
		if (current == NULL)
			return (NULL);
	}

	if (idx == 1)
		dlistint_t *add_dnodeint(dlistint_t **head, const int n);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = current;
	new->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = new;

	return (current);
}
