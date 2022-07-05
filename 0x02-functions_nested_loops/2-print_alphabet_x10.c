#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 */
void print_alphabet(void)

{
char ch;

int i;

ch = 'a';

i = 0;

while (i < 10)
{
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
