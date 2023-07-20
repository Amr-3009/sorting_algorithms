#include "sort.h"

/**
 * insertion_sort_list -sorts a doubly linked list using insertion sort methon
 * @list: doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (list == NULL || (*list)->next == NULL)
		return;
	node = (*list)->next;
	while (node)
	{
		while ((node->prev) && (node->prev->n > node->n))
		{
			node = node_rep(node, list);
			print_list(*list);
		}
		node = node->next;
	}
}

/**
 * node_rep - replaces the node for the correct node
 * @node: node
 * @list: doublt linked list
 * Return: pointer to the node
 */

listint_t *node_rep(listint_t *node, listint_t **list)
{
	listint_t *back = node->prev, *current = node;

	back->next = current->next;
	if (current->next)
		current->next->prev = back;
	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}
