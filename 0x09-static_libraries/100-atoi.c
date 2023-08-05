#include "main.h"
/**
 * _atoi - to conv string 2 int
 * @s: to use in pr
 *
 * Return: int
 */
int _atoi(char *s)
{
	int sig = 1, a = 0;
	unsigned int unsig = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
			sig *= -1;
		a++;
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
		unsig = (unsig * 10) + (s[a] - '0');
		a++;
	}
	unsig *= sig;
	return (unsig);
}
