#include "holberton.h"
#include <math.h>
/**
 * modulus - calculating the modulus
 * @c: struct complex number
 * Return: modulus
 */
double modulus(complex c)
{
	return (sqrt(pow(c.re, 2) + pow(c.im, 2)));
}
