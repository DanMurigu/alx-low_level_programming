#include "main.h"

/**
 * Main - Entry point
 * print_last_digit -> prints the last digit
 * @n: the passed args
 * int print_last_digit(int n)
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	return (n % 10);
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
