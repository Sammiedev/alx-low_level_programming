#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times followed by a new line
 */
void print_alphabet_x10(void)
{
int i, j;
char letter;
for (i = 0; i < 10; i++)
for (j = 0, letter = 'a'; j < 26; j++, letter++)
_putchar(letter);
_putchar('\n');
}
