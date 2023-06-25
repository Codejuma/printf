#include "main.h"
/**
 * handler - Controller
 * @string: string
 * @num: argument list
 *
 * Return: Total size of argument
 */
int handler(const char *string, va_list num)
{
	int count, i, aux;

	count = 0;
	for (i = 0; string[i] != 0; i++)
	{
		if (string[i] == '%')
		{
			aux = percent_handler(string, num, &i);
			if (aux == -1)
				return (-1);

			count += aux;
			continue;
		}

		_putchar(string[i]);
		count = count + 1;
	}

	return (count);
}

/**
 * percent_handler - percent format controller
 * @string: string format
 * @num: list of argument
 * @i: iterator
 *
 * Return: size of number of printed elements
 */
int percent_handler(const char *string, va_list num, int *i)
{
	int count, k, number_formats;
	format formats[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_low},
		{'X', print_hexadecimal_upp}, {'p', print_pointer},
		{'r', print_rev_string}, {'R', print_rot}
	};
	*i = *i + 1;
	if (string[*i] == '\0')
		return (-1);
	if (string[*i] == '%')
	{
		_putchar('%');
		return (1);
	}
	number_formats = countof(formats) / countof(formats[0]);
	for (count = k = 0; k  < number_formats; k++)
	{
		if (string[*i] == formats[k].type)
		{
			count = formats[k].f(num);
			return (count);
		}
	}
	_putchar('%'), _putchar(string[*i]);
	return (2);
}
