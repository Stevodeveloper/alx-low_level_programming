#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer to the list
 *
 * Return: returns the number of nodes when successful
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
		printf("[0] (nil)");
		else
			printf("%s\n", h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}

