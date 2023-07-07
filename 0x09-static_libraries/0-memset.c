#include "main.h"
/**
 * _memset - fills block of mem with a specific val
 * @s: address of mem to be filled
 * @b: the desired val
 * @n: num of byte to change
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
