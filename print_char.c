#include "alx.h"


/**
 * print_char - A funct that prints a character.
 * @val: The arguments.
 * Return: 1.
 */

int print_char(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);
	return (1);
}