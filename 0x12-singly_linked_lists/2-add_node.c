#include "lists.h"
/**
 * add_node -  adds a new node at the beginnig of a list_t list
 * @head: a pointer to a pointer to the head of the list
 * @str: string to be duplicated
 *
 * Return: the adress of new element of null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;


	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
