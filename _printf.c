#include "main.h"

/**
 * print_char - affiche un caractère
 * @args: liste des arguments variables
 *
 * Return: nombre de caractères imprimés (toujours 1)
 */
int print_char(va_list args)
{
    char c = va_arg(args, int);
    
    _putchar(c);
    return (1);
}

/**
 * print_string - affiche une chaîne de caractères
 * @args: liste des arguments variables
 *
 * Return: nombre de caractères imprimés
 */
int print_string(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;
    
    /* Si la chaîne est NULL, on affiche "(null)" */
    if (str == NULL)
        str = "(null)";
    
    /* On parcourt la chaîne caractère par caractère */
    while (str[count])
    {
        _putchar(str[count]);
        count++;
    }
    
    return (count);
}

/**
 * print_percent - affiche le symbole %
 * @args: liste des arguments (non utilisée ici)
 *
 * Return: nombre de caractères imprimés (toujours 1)
 */
int print_percent(va_list args)
{
    (void)args; /* On ignore l'argument */
    
    _putchar('%');
    return (1);
}

/**
 * handle_format - gère les spécificateurs de format
 * @format: le caractère après le %
 * @args: liste des arguments variables
 *
 * Return: nombre de caractères imprimés, ou -1 si format invalide
 */
int handle_format(char format, va_list args)
{
    if (format == 'c')
        return (print_char(args));
    else if (format == 's')
        return (print_string(args));
    else if (format == '%')
        return (print_percent(args));
    
    /* Si le format n'est pas reconnu, on affiche % suivi du caractère */
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
    
    /* Si format est NULL, on retourne -1 */
    if (format == NULL)
        return (-1);
    
    /* On initialise la liste d'arguments variables */
    va_start(args, format);
    
    /* On parcourt la chaîne format caractère par caractère */
    while (format[i])
    {
        /* Si on trouve un %, on traite le spécificateur qui suit */
        if (format[i] == '%')
        {
            i++; /* On passe au caractère après % */
            
            /* Si on arrive à la fin de la chaîne après %, on arrête */
            if (format[i] == '\0')
                break;
            
            /* On traite le spécificateur de format */
            count += handle_format(format[i], args);
        }
        else
        {
            /* Sinon, on affiche simplement le caractère */
            _putchar(format[i]);
            count++;
        }
        i++;
    }
    
    /* On nettoie la liste d'arguments */
    va_end(args);
    
    return (count);
}
