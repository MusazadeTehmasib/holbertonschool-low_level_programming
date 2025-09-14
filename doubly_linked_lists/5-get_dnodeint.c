#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at a given index in a list
 * @head: Pointer to the head of the list
 * @index: Index of the node to find (starting at 0)
 *
 * Return: Pointer to the node at index, or NULL if it doesn't exist
 */



dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned  int i;
		for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
