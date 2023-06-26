#include <stdio.h>
/**
 * _strlen - length
 * @str: string to get length
 * Return: length of @str.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
