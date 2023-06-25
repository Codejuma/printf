#include "main.h"
/**
 * print_rev_string - print the string in reverse
 * @num: list of args
 * Return: len of the str
 */
int print_rev_string(va_list num)
{
	int j, count;
	const char *strr;

	strr = va_arg(num, const char *);

	count = _strlen(strr);

	for (j = count - 1; j >= 0; j--)
		_putchar(strr[j]);

	return (count);
}
