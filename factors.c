#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * factorize - Factors the given number and prints
 * its factorization in the format "n=p*q"
 * @number: the number to factorize
 */

void factorize(int number)
{
	int i;

	for (i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			printf("%d=%d*%d\n", number, i, number / i);
			return;
		}
	}

	printf("%d=%d*%d\n", number, 1, number);
}



/**
 * main- reads numbers from a file and calls the
 * factorize function for each number.
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int number;
	FILE *file;

	if (argc < 2)
	{
		printf("Usage: %s <file>\n", argv[0]);
		return (1);
	}

	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		printf("Failed to open file\n");
		return (1);
	}

	while (fscanf(file, "%d", &number) != EOF)
	{
		factorize(number);
	}

	fclose(file);
	return (0);
}
