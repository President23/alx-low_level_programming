#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints
* @separator: str
* @n: number
* @...: A variable
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list guy;
	unsigned int dex;

	va_start(guy, n);

	for (dex = 0; dex < n; dex++)
	{
		printf("%d", va_arg(guy, int));

		if (dex != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(guy);
}
