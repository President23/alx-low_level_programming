#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - print everything
* @format: lst typ arg
*/

void print_all(const char * const format, ...)
{
	int a = 0;
	char *type, *data = "";

	va_list form;

	va_start(form, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", data, va_arg(form, int));
					break;
				case 'i':
					printf("%s%d", data, va_arg(form, int));
					break;
				case 'f':
					printf("%s%f", data, va_arg(form, double));
					break;
				case 's':
					type = va_arg(form, char *);
					if (!type)
						type = "(nil)";
					printf("%s%s", data, type);
					break;
				default:
					a++;
					continue;
			}
			data = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(form);
}
