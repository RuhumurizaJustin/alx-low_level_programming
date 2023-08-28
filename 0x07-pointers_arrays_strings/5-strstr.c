#include "main.h"
#include <string.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: destination strng
 * @needle: source string
 * Return: returns a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
char *denyse;

denyse = strstr(haystack, needle);

return (denyse);

}
