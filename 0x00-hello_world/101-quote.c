#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly a phrase 
 * Dora Korpar, 
 * followed by a new line 
 * Return: 1 is successful
 */
int main(void)
{
char var[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, var, sizeof(var) - 1);
return (1);
}
