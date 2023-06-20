#include <unistd.h>
/**
 * _putchar - write char c to stdout
 * @c: prints char
 * Return: success 1.
 * On error, -1 is returned, and errno is set appx
 */
int _putchar(char c)

{
	return (write(1, &c, 1));
}
