#include "main.h"
/**
 * print_sign - chechk if the number is postive, zero or negative
 *@n: the number the code will check it
 *
 * Return: On success  1.
 * On error, 0 is returned if the number is zero,
 *  and -1 if the number is negative
 */

int print_sign(int n)
{
	int res;

	if (n > 0)
	{
		_putchar('+');
		res = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		res = 0;
	}
	else
	{
		_putchar('-');
		res = -1;
	}
	return (res);
}
