#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at a position
 * @head: head to pointer
 * @idx: traverse list
 * @n: count
 * Return: adddress of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current;

	if (head == NULL)
		return (NULL);

	listint_t *new_node = (listint_t*)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = head;
	for (i = 0; i < (idx - 1) && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
}
