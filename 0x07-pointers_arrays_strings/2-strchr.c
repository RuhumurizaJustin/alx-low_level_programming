#include "main.h"
#include <string.h>

/**
 * _strchr  - a function that locates a character in a string
 * @s: destination string
 * @c: declared character
 * Return: returns a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{

char *j;

j = strchr(s, c);

return (j);
}
