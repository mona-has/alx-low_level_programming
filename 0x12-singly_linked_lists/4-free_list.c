#include "lists.h"
#include <stdlib.h>

/**
* free_list - entry point
*
* @head: head of a list
*
* Return: void
*/

void free_list(list_t *head)
{

	if (head == NULL)
		return;
	free_list(head->next);
	free(head);
}
