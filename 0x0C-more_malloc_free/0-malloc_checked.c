#include <stdlib.h>
#include "main.h"

/**
 * main - Write a function that allocates memory using  malloc.
 *
 * Return: malloc pointer
 */

void *malloc_checked(unsigned int b)
{
  void *ptB;

  ptB = malloc(b);

  if(ptB == NULL)
  {
    exit(98);
  }else{ 
    return (ptB);
  }

}