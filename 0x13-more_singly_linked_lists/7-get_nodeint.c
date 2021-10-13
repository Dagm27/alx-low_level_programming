#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
  * get_nodeint_at_index - 
  * @head: head of linked list
  * @index: index of the node starting from 0
  *
  * Return: null or node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}

	return (NULL);
}
