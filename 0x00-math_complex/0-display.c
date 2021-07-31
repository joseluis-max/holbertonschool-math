#include "holberton.h"
#include <stdio.h>
#include <stddef.h>
/**
 * display_complex_number - printf a complex number
 * @c: struct type complex
 */
void display_complex_number(complex c)
{
	if (c.re == 0 && c.im == 0)
	{
		printf("%d", c.re);
	}
	else
	{
		if (c.re == 0 && c.im != 0)
			prinft("%d", c.re);
		if (c.re != 0)
			printf("%0.f", c.re);
		if (c.im > 0)
			printf(" + ");
		else if (c.im < 0)
			printf(" - ");
		if (c.im > 0 && c.im != 1)
			printf("%0.fi", c.im);
		if (c.im == 1)
			printf("i");
		if (c.im < 0 && c.re != 0 && c.im != -1)
			printf("%0.fi", c.im * -1);
		if (c.im < 0 && c.re != 0 && c.im == -1)
			printf("i");
		if (c.im < 0 && c.re == 0 && c.im != -1)
			printf("%gi", c.im);
		if (c.im < 0 && c.re == 0 && c.im == -1)
			printf("i");
	}
	printf("\n");
}
