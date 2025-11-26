#include "main.h"

/**
 * _putchar - Écrit un caractère sur stdout
 * @c: Le caractèrea écrire
 *
 * Return: 1 en cas de succès, -1 en cas d'erreur
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
