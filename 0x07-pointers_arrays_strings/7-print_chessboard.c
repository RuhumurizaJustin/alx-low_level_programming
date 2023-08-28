#include "main.h"
#include <string.h>

/**
 * _chessboard - a function that prints the chessboard
 * @a: declared one
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
int isaac;
int shadia;

for (isaac = 0; isaac < 8; isaac++)
{
for (shadia = 0; shadia < 8; shadia++)
_putchar(a[isaac][shadia]);
_putchar('\n');
}
}
