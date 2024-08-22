#include "sort.h"



/**
 * swap  - swaps two nodes positions
 * @first: NODE A
 * @sec: NODE B
 */

void swap(listint_t *first, listint_t *sec)
{

	if (first->prev)
		first->prev->next = sec;
	if (sec->next)
		sec->next->prev = first;
	first->next = sec->next;
	sec->prev = first->prev;
	first->prev = sec;
	sec->next = first;
}




/**
 * insertion_sort_list  - sorts a d_linked list
 * @list: Pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL, *tmp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	node = *list;
	node = node->next;
	while (node)
	{
		while (node->prev && node->n < (node->prev)->n)
		{
			tmp = node;
			if (node->next)
				(node->next)->prev = tmp->prev;
			(node->prev)->next = tmp->next;
			node = node->prev;
			tmp->prev = node->prev;
			tmp->next = node;
			if (node->prev)
				(node->prev)->next = tmp;
			node->prev = tmp;
			if (tmp->prev == NULL)
				*list = tmp;
			print_list(*list);
			node = node->prev;
		}
		node = node->next;
	}
}
