#include "main.h"



void print_diagsums(int *a, int size)
{
  int sum1;
  int sum2;
  int i;


  for (i = 0; a[i] != '\0'; i++)
    {

      sum1 += i * size + i;
      sum2 += i * size + (size - 1 - i)
