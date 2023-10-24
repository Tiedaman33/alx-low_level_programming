#include "lists.h"
/**
 * free_listint2 - frees a lis
 * @head: pointer to pointer
 * Return: 0 success
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
