#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: number checked
 * Return: 1 postive num, -1 negative num or 0 amything else
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
