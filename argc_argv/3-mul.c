#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * @argc: integer
 * @argv: array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
