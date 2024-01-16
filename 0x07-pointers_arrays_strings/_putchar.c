#include <unistid.h>

/**
 * _putchar - writes the char
 * @c: char to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
