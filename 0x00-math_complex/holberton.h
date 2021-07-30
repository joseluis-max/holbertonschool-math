#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * struct complex - define a complex number
 * @re: real part
 * @im: imaginary part
 * Description: struct for represent a complex number
 */
struct complex_s
{
	double re, im;
};
typedef struct complex_s complex;
void display_complex_number(complex c);

#endif

