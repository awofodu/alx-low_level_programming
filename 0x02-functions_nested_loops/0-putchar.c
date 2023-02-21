#include "main.h"

/**
  * main - Function to print _putchar
  * Return: 0
  */

int main(void)
{
	char string[] = "_putchar";
	int ch;

	for (ch=0; ch<=8; ch++)
		_putchar(string[ch]);
	_putchar("\n");
	return (0);
}
