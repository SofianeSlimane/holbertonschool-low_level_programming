#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */


void  times_table(void)
{
  int i, j, first_num, second_num, result;
  for (i = 0; i < 10; i++) {
	_putchar('0');
	_putchar(',');
  	for (j = 1; j < 10; j++) {
		result = i * j;
	
		if (result < 10)  {
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + result);
		}
		else if (result > 9) {
			_putchar(' ');
			first_num = result / 10;
			second_num = result % 10;
			_putchar('0' + first_num);
			_putchar('0' + second_num);
		}
		if (j < 9) {
			_putchar(',');
		}
	}
	_putchar('\n');
  }

}

