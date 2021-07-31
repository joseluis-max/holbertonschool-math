#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * struct complex_s - define a complex number
 * @re: real part
 * @im: imaginary part
 * Description: struct for represent a complex number
 */
struct complex_s
{
	double re;
	double im;
};
typedef struct complex_s complex;
void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg (double m, double arg, complex *c3);

#endif

