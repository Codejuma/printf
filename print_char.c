#include "main.h"
/**
 * print_char - print character
 * @num: the number of list
 * Return: return 1 when success
 */
int print_char(va_list num)
{
	int i;

	i = va_arg(num, int);

	_putchar(i);

	return (1);
}
