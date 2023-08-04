#include "main.h"
/**
 * get_endianness - runs like a checker
 * Return: 0 for success
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
