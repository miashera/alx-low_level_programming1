#include "main.h"
/**
 * flip_bits - no. of bits to change counted
 * @n: 1st num
 * @m: 2nd num
 * Return: changend bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
