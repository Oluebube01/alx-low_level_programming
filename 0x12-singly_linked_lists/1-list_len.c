#include "lists.h"
/**
 * list_len - Calculate the number of elements
 * @h: Pointer to a list
 * Return: integer
 **/
size_t list_len(const list_t *h)
{
	const list_h *temp;
	unsigned int counter = 0;
	temp = h;
	
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
