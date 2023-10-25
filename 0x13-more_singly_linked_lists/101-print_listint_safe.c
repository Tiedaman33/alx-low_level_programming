#include "lists.h"
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - counts the numer od unique nodes
 * @head: pointer to first node in list
 *
 * Return: 0 if list not looped
 * otherwise return number of nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *current, *task;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	current = head->next;
	task = (head->next)->next;

	while (task)
	{
		if (current == task)
		{
			current = head;
			while (current != task)
			{
				nodes++;
				current = current->next;
				task = task->next;
			}
			current = current->next;
			while (current != task)
			{
				nodes++;
				current = current->next;
			}
			return (nodes);
		}
		current = current->next;
		task = (task->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to first node of list
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
		       head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

