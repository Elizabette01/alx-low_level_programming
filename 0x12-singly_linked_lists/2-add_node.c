#include "lists.h"
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: Pointer to the head of the list_t list
 * @str: String to be added to the list_t list
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup;
	int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new_node;

	return (new_node);
}
