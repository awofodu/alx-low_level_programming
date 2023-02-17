#include <stdio.h>


/**
  * main - Entry point
  * a program that prints the alphabet in lowercase, followed by a
  * Return: 0
  */

int main(void)
{
	for (char l = 'a'; l <= 'z'; l++)
	{
		if (l == 'e' || l == 'q')
		{
			continue;
		}
		putchar(l);
	}
	putchar('\n');
	return (0);
}
