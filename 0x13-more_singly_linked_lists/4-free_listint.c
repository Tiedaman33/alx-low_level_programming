#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to list
 * return: 0 success
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
