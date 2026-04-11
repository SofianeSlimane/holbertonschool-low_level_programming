#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */


void  times_table(void)
{
  int i, j;
  for (i = 0; i < 10; i++) {
  	for (j = 0; j < 10; j++) {
		int result = i * j;
		if (result < 10)  {
			_putchar('0' + result);
		}
		else {
			int first_num = result / 10;
			int second_num = result % 10;
			_putchar('0' + first_num);
			_putchar('0' + second_num);
		}
		
		if (j < 9) {
		_putchar(',');
		 _putchar(' ');
		}
		
	}
	_putchar('\n');
  }

}

