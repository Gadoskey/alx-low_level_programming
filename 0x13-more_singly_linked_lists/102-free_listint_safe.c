#include "lists.h"
/**
 * free_listint_safe - prints a linked list safely
 * @h: pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *next_node;
	size_t count = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	temp = *h;

	while (temp != NULL)
	{
		next_node = temp->next;
		free(temp);
		count++;
		temp = next_node;
		if (temp == *h)
		{
			*h = NULL;
			break;
		}
	}
	return (count);
}
