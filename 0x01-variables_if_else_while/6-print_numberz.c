#include <stdio.h>

/**
  * main - Entry point
  * a program that prints base10 numbers from 0
  * Return: 0
  */

int main(void)
{
	int n;

	for (n = 0;  n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
