#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of ints in ascending order
 *@list: dbl linked list to be sorted
 *Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next, *prev;

	if (!list || !*list || !(*list)->next)
		return;

	current = *list;
	while (current)
	{
		next = current->next;
		prev = current->prev;
		while (prev && prev->n > current->n)
		{
			prev->next = current->next;
			if (current->next)
				current->next->prev = prev;
			current->next = prev;
			current->prev = prev->prev;
			prev->prev = current;
			if (current->prev)
				current->prev->next = current;
			else
				*list = current;
			prev = current->prev;
			print_list(*list);
		}
		current = next;
	}
}
