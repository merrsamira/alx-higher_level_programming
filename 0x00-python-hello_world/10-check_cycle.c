#include "lists.h"

/**
 * check_cycle - check for loop in LL
 * @list: head of linked list
 * Return: 1 
 */

int check_cycle(listint_t *list)
{
	listint_t *s, *f;

	if (!list)
	{
		return (0);
	}
	s = list;
	f = list->next;
	while (f && s && f->next)
	{
		if (s == f)
		{
			return (1);
		}
		s = s->next;
		f = f->next->next;
	}
	return (0);
}
