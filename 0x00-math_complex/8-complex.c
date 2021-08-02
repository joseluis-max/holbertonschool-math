#include "holberton.h"
#include <math.h>
/**
 * complex_from_mod_arg - complete real and imaginary part
 * @m: modulus
 * @arg: argument
 * @c3: complex number
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	/* real part */
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
