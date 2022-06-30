#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 if exited properly,
 */
int main(void)
{
char charType;
int intType;
long int longIntType;
long long int longLongType;
float floatType;

printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long int: %d byte(s)\n", sizeof(long long int));
printf("SIze of a float: %d byte(s)\n", sizeof(float));
return (0);
}
