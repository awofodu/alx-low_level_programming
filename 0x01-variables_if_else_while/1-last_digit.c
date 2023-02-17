#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - functin to get the last digit
  * Return: 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int ln = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, ln);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is less than zero", n, ln);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0",
				n, ln);
	}

	return (0);
}
