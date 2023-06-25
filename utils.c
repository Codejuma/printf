#include "main.h"
/**
 * _strlen - Calculate stringth len
 * @s: string
 *
 * Return: Length
 */
int _strlen(const char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
		;

	return (a);
}

/**
 * print - print char
 * @s: string
 *
 * Return: string length
 */
int print(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		_putchar(s[a]);

	return (a);
}
