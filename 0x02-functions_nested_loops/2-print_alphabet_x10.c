#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times followed by a new line
 */
void print_alphabet_x10(void)
{
char letter;
i = 0; 
while (i < 10)
for (j = 0, letter = 'a'; j < 26; j++, letter++)
{
_putchar(letter);
}
_putchar('\n');
i++;
}
