#include "holberton.h"
#include <math.h>
/**
 * modules - calculating the modulus
 * @c: struct complex number
 * Retunr: modulus
 */
double modulus(complex c)
{
	return (sqrt(c.re + c.im));
}
