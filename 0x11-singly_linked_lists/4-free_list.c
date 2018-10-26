#include "lists.h"

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		head = head->next;
	}
}
