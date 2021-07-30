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
			printf(" + %0.fi", c.im);
		}
		printf("\n");
}
