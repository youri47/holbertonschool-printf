#include "main.h"

/**
 * _printf - Fonction printf simplifiée
 * @format: La chaîne de format
 *
 * Return: Nombre de caractères affichés
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
				count += print_number(va_arg(args, int));
			else if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
			/* Ajoute tes autres cas ici (c, s, etc.) */
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
