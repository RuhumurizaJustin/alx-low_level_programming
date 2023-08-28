#include "main.h"
#include <string.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: destination string
 * @accept: sourece string
 * Return: returns the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
char r;

r = strspn(s, accept);

return (r);
}
