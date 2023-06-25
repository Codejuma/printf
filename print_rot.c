#include "main.h"
/**
 * rot13 - encode string using rot13
 * @str: string to encode
 * Return: string encode
 */
int rot13(char *str)
{
	int a, b;
	char *normal, *rot13;

	normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; normal[b] != '\0'; b++)
		{
			if (str[a] == normal[b])
			{
				_putchar(rot13[a]);
				break;
			}
		}
		if (!normal[b])
			_putchar(str[i]);
	}

	return (1);
}
/**
 * print_rot - printsrot13 string
 * @num: string encoded
 *
 * Return: string length
 */
int print_rot(va_list num)
{
	char *p;
	int p_len;

	p = va_arg(list, char *);
	p_len = rot13((p != NULL) ? p : "(yehhy)");

	return (p_len);
}
