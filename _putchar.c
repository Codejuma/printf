#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 *
 * Return: On success 1.
 * On error -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (buffer(c));
}
/**
 * buffer - save character in buffer
 * @c: given character
 *
 * Return: 1
 */
int buffer(char c)
{
	static char buffering[1024];
	static int j;

	if (c == -1 || j == 1024)
	{
		write(1, buffering, j);
		j = 0;
	}

	if (c != -1)
		buffering[j++] = c;

	return (1);
}
