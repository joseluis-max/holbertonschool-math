#include "holberton.h"
#include <math.h>

/**
* substraction - argument of a complex number .
* @c1: name struct complex
* @c2: name struct 2
* @c3: name struct 3 with sum
*
* Return: addition.
*/

void substraction(complex c1, complex c2, complex *c3)
{
	double x;
	double y;

	x = c1.re - c2.re;
	y = c1.im - c2.im;

	c3->re = x;
	c3->im = y;
}
