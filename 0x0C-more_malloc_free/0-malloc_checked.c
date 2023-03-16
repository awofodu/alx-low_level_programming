#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Write a function that allocates memory using  malloc.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b){
  void *ptB;

  ptB = malloc(sizeof(b));

  if(ptB == NULL)
  {
    exit(98);
  }

  return (ptB);
}