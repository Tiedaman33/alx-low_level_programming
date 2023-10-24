#include "lists.h"
/**
 * get_nodeint_at_index - return nth node
 * @head: head pointrt to list
 * @index: target node
 * Return: 0 sucess
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
