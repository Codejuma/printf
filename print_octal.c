#include "main.h"
/**
 * print_octal - print unsigned octal
 * @num: number to print
 *
 * Return: Length of the number
 */
int print_octal(va_list num)
{
	char *p_buf;
	int count;

	p_buf = itoa(va_arg(num, unsigned int), 8);

	count = print((p_buf != NULL) ? p_buf : "NULL");

	return (count);
}
