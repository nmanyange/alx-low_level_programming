#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * but for multiples of 3 prints fizz
 * and for multiples of 5 prints  buzz
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d\n", num);
		}
	}
	printf("\n");
	return (0);
}


