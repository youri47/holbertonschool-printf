#include "main.h"

/**
 * handle_format - gère les spécificateurs de format
 * @format: le caractère après le %
 * @args: liste des arguments variables
 *
 * Return: nombre de caractères imprimés
 */
int handle_format(char format, va_list args)
{
	if (format == 'c')
		return (print_char(args));
	else if (format == 's')
		return (print_string(args));
	else if (format == '%')
		return (print_percent(args));
	else if (format == 'd' || format == 'i')
		return (print_number(args));

	_putchar('%');
	_putchar(format);
	return (2);
}

/**
 * _printf - produit une sortie selon un format
 * @format: chaîne de format contenant des directives
 *
 * Return: le nombre de caractères imprimés
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;
			count += handle_format(format[i], args);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}
