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
		printf("%d", 0);
	else
	{
		if (c.re == 0 && c.im != 0)
			printf("%d", 0);
		if (c.re != 0)
			printf("%g", c.re);
		if (c.im > 0)
			printf(" + ");
		else if (c.im < 0)
			printf(" - ");
		if (c.im > 0 && c.im != 1)
			printf("%gi", c.im);
		else if (c.im == 1)
			printf("i");
		else if (c.im < 0 && c.re != 0 && c.im != -1)
			printf("%gi", c.im * -1);
		else if (c.im < 0 && c.re != 0 && c.im == -1)
			printf("i");
		else if (c.im < 0 && c.re == 0 && c.im != -1)
			printf("%gi", c.im);
		else if (c.im < 0 && c.re == 0 && c.im == -1)
			printf("i");
	}
	printf("\n");
}
