#include "lists.h"

/**
 * sum_dlistint - Sums all the data a dlistint_t list
 * Return: sum of all the data
 * @head: head of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
