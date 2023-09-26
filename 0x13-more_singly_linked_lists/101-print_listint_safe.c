#include "lists.h"
/**
 * print_listint_safe - prints a linked list safely
 * @head: pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	unsigned long int addresses[1024];

	while (current != NULL)
	{
		size_t i;

		for (i = 0; i < count; i++)
		{
			if (addresses[i] == (unsigned long int)current)
			{
				printf("[%p] %d\n", (void *)current, current->n);
				return (count);
			}
		}
		addresses[count] = (unsigned long int)current;
		count++;

		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}
	return (count);
}
