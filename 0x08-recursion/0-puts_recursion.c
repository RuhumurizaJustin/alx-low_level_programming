#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: declared character
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
if (*s != 1)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
