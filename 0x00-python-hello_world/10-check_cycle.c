#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check cycle - checks if list is cyclic
 * @h: pointer to head of list
 * Return: 1 if cyclic , 0 otherwise
 */
int check_cycle(listint_t *list)
{
    listint_t *slow = list, *fast = list;

    while (fast && fast->next)
    {
	        slow = slow->next;
	        fast = fast->next;
		if (slow==fast)
        		return (1);
    }
    return (0);
