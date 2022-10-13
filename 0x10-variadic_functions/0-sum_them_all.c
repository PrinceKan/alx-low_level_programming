#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters
 * @n: number of parameters received
 *
 * Return: 0 if n is 0 of the sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int add = 0, num;

	va_list parameters;

	va_start(parameters, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0 ; i < n ; i++)
	{
		num = va_arg(parameters, int);
		add = add + num;
	}
	va_end(parameters);
	return (add);
}
