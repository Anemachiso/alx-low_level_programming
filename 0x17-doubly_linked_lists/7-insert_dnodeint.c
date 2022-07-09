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
		add_dnodeint(head, n);

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

/**
 * *add_dnodeint - adds a node to a linked list head
 * @head: linked list head
 * @n: int element of the linked list
 * Return: number of elements
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
    new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}

/**
 * add_dnodeint_end - add a node at the end of a linked list
 * @head: The character to print
 * @n: string for the new node
 *
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new_node;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
    new_node->prev = current;

	if (current)
		current->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
