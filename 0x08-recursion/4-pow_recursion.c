#include "main.h"
/**
 * _pow_recursion - value x returned
 * @x: value mult
 * @y: times mult
 * Return: value mult
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
