#include <stdio.h>

/**
 * main - print name of program
 *
 * @argc: argument counter
 * @argv: pointer to array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
