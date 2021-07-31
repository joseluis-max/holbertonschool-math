#include "holberton.h"
/**
 * conjugate - make the conjugate of a complex
 * @c: complex number
 * Return: conjugate of a comples number
 */
complex conjugate(complex c)
{
	c.im  *= -1;
	return (c);
}
