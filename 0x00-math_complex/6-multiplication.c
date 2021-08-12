#include "holberton.h"
#include <math.h>

/**
* multiplication - multiplicate two complex numbers
* @c1: struct complex number
* @c2: struct complex number
* @c3: struct complex number result
*/

void multiplication(complex c1, complex c2, complex *c3)
{
	double a, b, c, d;

	a = c1.re * c2.re;
	b = c1.re * c2.im;
	c = c1.im * c2.re;
	d = -1 * (c1.im * c2.im);
	c3->re = a + d;
	c3->im = b + c;
}
