#include "main.h"
/**
 * _puts - print pro 2 strings
 * @str: print
 * _putchar print \n
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
