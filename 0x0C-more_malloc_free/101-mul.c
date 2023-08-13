#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - check
 * @s: in
 * Return: 0
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}

	return (1);
}

/**
 * _strlen - return
 * @s: str
 * Return: change
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}

/**
 * errors - remove
 */

void errors(void)
{
	printf("Errors\n");
	exit(98);
}

/**
 * main - multiply
 * @argc:num
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, a, carry, digit1, digit2, *result, i = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;

	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);

	for (a = 0; a <= len1 + len2; a++)
		result[a] = 0;
	for (len1 = len1 - 1; len >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;

		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}

		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}

	for (a = 0; a < len - 1; a++)
	{
		if (result[a])
			i = 1;
		if (i)
			_putchar(result[i] + '0');
	}

	if (!i)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
