#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
* \\o/\n : to stop infinite loop
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	/**
	 * while (i < 10) - infinite loop as a result of this
	 * {
	 *	 putchar(i);
	 * }
	 */
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
