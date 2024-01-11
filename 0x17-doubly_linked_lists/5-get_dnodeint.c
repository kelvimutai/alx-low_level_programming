#include <stdlib.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - Gets a node 
  * @head: The head of the doubly linked list
  * @index: The index to find in the doubly linked list
  *
  * Return: Specific node of the doubly linked list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int iter_times = 0;

	if (head)
	{
		while (current != NULL)
		{
			if (iter_times == index)
				return (current);

			current = current->next;
			++iter_times;
		}
	}

	return (NULL);
}
