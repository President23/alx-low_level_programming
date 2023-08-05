#include "main.h"

/**
 * _isalpha - alpha pro check
 * @c: check
 * Return: change
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
