#include "heron.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * heron_sequence - calculate the heron sequence
 * @p: number to get the root
 * @xn: current approximation
 * Return: current approximation
 */
double heron_sequence(double p, double xn)
{
	return ((xn + (p / xn)) / 2);
}
/**
 * add_node - add a node in the en of linked list
 * @head: first element of linked list
 * @xn: number of precision
 * Return: the adress of new list
 */
t_cell *add_node(t_cell *head, double xn)
{
	t_cell *node;

	node = malloc(sizeof(t_cell));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->p = head->p;
	node->elt = xn;
	node->next = NULL;
	if (head != NULL)
		node->next = head;
	head = node;
	return (head);
}
/**
 * heron - heron's method or sequence
 * @x0: approximate number (always 1)
 * @p: objective number for get the approximate square root
 * Return: A head of a linked list that have every iteration
 */

t_cell *heron(double p, double x0)
{
	t_cell *head;
	int precision;
	double prev;

	head = malloc(sizeof(t_cell));
	head->p = p;
	head->elt = x0;
	head->next = NULL;
	precision = 0;
	while (precision < 6)
	{
		/* calculating iteration */
		prev = heron_sequence(head->p, head->elt);
		/* add a new node */
		head = add_node(head, prev);
		precision++;
	}
	return (head);
}
