#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Return
* @n: The number
* @...: A variable
* Return: n == 0 - 0.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list zi;
	unsigned int a, sum = 0;

	va_start(zi, n);

	for (a = 0; a < n; a++)
		sum += va_arg(zi, int);

	va_end(zi);

	return (sum);
}
