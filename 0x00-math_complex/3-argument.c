#include "holberton.h"
#include <math.h>

/**
 * argument - calculating argument of complex number
 * @c: struct complex number
 * Return: argument of c
 */
double argument(complex c)
{
	double argument;

	argument = atan2(c.im, c.re);
	return (argument);
}
