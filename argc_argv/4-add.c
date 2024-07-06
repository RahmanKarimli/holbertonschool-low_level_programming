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
	int i;
	int sum;
	int j;
	char *s;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		s = argv[i];
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] < 48 || s[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
