#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Succesful)
*/

int main(void)
{
	printf("Size of int: %c byte(s)\n", sizeof(int));
	printf("Size of char: %c byte(s)\n", sizeof(char));
	printf("Size of long int: %c byte(s)\n", sizeof(long int));
	printf("Size of long long int: %c byte(s)\n", sizeof(long long int));
	printf("Size of float: %c byte(s)\n", sizeof(float));
	return (0);
}


