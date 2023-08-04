#include "main.h"
/**
 * get_bit - return value of bit at an index in a dec no.
 * @n: search
 * @index: index bit
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
