#include "main.h"
/**
 * print_integer - print number to base 10
 * @num: number printed to base 10
 *
 * Return: Length of numbers in decimal
 */
int print_integer(va_list num)
{
	char *p_buf;
	int count;

	p_buf = itoa(va_arg(num, int), 10);

	count = print((p_buf != NULL) ? p_buf : "NULL");

	return (count);
}
