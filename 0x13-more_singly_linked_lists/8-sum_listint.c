#include "lists.h"
/**
 * sum_listint - function that returns sum  of data in list
 * @head: head pointer to lst
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
