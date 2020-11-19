#include<stdio.h>
#include<stdlib.h>

unsigned long long int Fib(unsigned int k);

int main(void)
{
	int i, input;
	printf("輸入要幾個數字：");

	scanf_s("%d", &input);
	if (input > 0)
	{
		for (i = 0; i < input; i++)
		{
			printf("%d\n", Fib(i));
		}
	}
	system("pause");
	return 0;
}

unsigned long long int Fib(unsigned int k)
{
	if (k == 0)
		return 0;
	if (k == 1)
		return 1;
	return (Fib(k - 1) + Fib(k - 2));
}