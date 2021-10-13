#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * sum_listint - sum of list dats
  * @head: head of linked list
  *
  * Return: empty
  */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
