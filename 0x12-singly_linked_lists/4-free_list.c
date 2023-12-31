#include "lists.h"

/**
 * free_list - Frees a linked list of list_t nodes.
 * @head: Pointer to the head of the linked list
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
