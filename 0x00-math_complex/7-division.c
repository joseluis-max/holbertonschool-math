#include "holberton.h"
#include <math.h>
#include <stdio.h>
/**
 * division - div two complex number
 * @c1: complex number struct
 * @c2: complex number struct
 * @c3: pointer two complex struct
 */
void division(complex c1, complex c2, complex *c3)
{
	double a, b, c, d, n, d1, d2;

	/* conjugate of c2 */
	c2.im = c2.im * -1;

	/* multiplication both members by conjugate of c2 */
	a = c1.re * c2.re;
	b = c1.re * c2.im;
	c = c1.im * c2.re;
	d = -1 * (c1.im * c2.im);
	/* result b + c, a + d */
	d2 = b + c;
	d1 = a + d;
	/*multiplication denominador */
	n = pow(c2.re, 2) + pow(c2.im, 2);
	/* allocation values in c3 */
	c3->im = d2 / n;
	c3->re = d1 / n;
}
