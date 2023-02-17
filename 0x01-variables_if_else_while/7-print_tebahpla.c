#include <stdio.h>


/**
  * main - Entry point
  * a program that prints the alphabet in lowercase, followed by a
  * Return: 0
  */

int main(void)
{
	char l = 'z';

	do {
		putchar(l);
		--l;
	}while(l >= 'a');

	putchar('\n');
	return (0);
}
