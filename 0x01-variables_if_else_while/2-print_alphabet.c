#include <stdio.h>

/**
  * main - function to convert to lowercase
  * Return: 0
  */

int main(void)
{
	char l = 'a'; 
	do
	{
		putchar(l);
		l++;
	}
	while(l <= 'z');
	putchar('\n');
}
