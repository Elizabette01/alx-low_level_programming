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
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_node->str = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
