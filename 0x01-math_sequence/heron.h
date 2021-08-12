#ifndef _HERON_H_
#define _HERON_H_
/**
 * struct cell - describe number and approximation of heron'r sequence
 * @p:root number of found
 * @xn: current iteration aproximation
 * @next: next element in linked list
 */
typedef struct cell 
{
	double p;
	double elt;
	struct cell *next;
} t_cell;
t_cell *heron(double p, double x0);

#endif
