#include "holberton.h"
#include <stdio.h>
/**
 * display_complex_number - printf a complex number
 * c: struct type complex
 */
void display_complex_number(complex c)
{
	printf("%0.f", c.re);
	if (c.im != 0)
	{
		printf(" %c %0.fi", SIGN, c.im);
	}
	printf("\n");
}
