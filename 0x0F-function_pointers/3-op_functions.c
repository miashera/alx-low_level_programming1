#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - sum of two nums
 * @a: 1st num
 * @b: 2nd num
 * Return: a and b sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Diff of two numbers
 * @a: first number.
 * @b: second number.
 * Return: Diff
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Return product
 * @a: first num
 * @b: second num
 * Return: product
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the div of two numbers
 * @a: ,,,
 * @b: ,,,
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - reminder
 * @a: ....
 * @b: ...
 * Return: remainder of the div of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
