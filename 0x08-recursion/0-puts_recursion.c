#include "main.h"

/**
 * _puts_recursion - This function do something.
 *
 * @s: Argument description.
 * @fd: Arg desc
 * @buf: Arg desc
 * @count: Arg desc
 *
 * Return: return value description.
 */
ssize_t write(int fd, const void *buf, size_t count);

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	write(1, &s, 1);
	s++;
	_puts_recursion(s);
}
