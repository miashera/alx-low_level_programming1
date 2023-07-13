#include "main.h"
#include <stdlib.h>
/**
 * _calloc - entry point
 * @num: number of members in
 * @size: ....
 * Return: (success)
 */
void *_calloc(unsigned int num, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (num == 0 || size == 0)
		return (NULL);
	l = num * size;
	p = malloc(l);
	if (p == NULL)
		return (NULL);
	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
