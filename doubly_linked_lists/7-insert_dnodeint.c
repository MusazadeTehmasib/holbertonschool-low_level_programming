#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 * @h: Pointer to the head of the list
 * @idx: Index to insert the new node (starting at 0)
 * @n: Value to store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
