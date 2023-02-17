#include <stdio.h>

/**
  * main - function to print both lowercase and uppercase
  * Return: 0
  */

int main(void)
{
	char sl = 'a';
	char cl = 'A';

	do {
		putchar(sl);
		sl++;
	} while (sl <= 'z');

	do {
		putchar(cl);
		cl++;
	} while (cl <= 'Z');
	putchar('\n');
	return (0);
}
