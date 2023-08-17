#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints
* @separator: in
* @n: nbr
* @...: in
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list data;
	char *type;
	unsigned int dex;

	va_start(data, n);

	for (dex = 0; dex < n; dex++)
	{
		type = va_arg(data, char *);

		if (type == NULL)
			printf("(nil)");
		else
			printf("%s", type);

		if (dex != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(data);
}
