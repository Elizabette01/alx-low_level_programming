#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: head of the linked list
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
