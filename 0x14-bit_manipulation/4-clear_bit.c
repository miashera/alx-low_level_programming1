#include "main.h"
/**
 * clear_bit - set the value of any given bit to 0
 * @n: the pointer to the bit changed
 * @index: index bit
 * Return: 1(success) -1 for anything else
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
