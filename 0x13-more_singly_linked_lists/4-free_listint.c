#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - Add new node at end of a liked list.
 * @head: head of the linked list.
 *
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
