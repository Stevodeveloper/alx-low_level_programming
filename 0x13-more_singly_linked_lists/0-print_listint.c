#include "lists.h"

/**
 * print_listint - prints all elements of listint_t list.
 * @h: char pointer
 * Return: nothing when successful
 */
size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;
	const listint_t *t = h;

	while (t != NULL)
	{
		node_num++;
		printf("%d\n", t->n);
		t = t->next;
	}

	return (node_num);
}
