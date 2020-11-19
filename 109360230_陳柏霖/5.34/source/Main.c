#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int base, exponent, power;
	while (1)
	{
		printf("enter base number¡G");
		scanf_s("%d", &base);
		printf("enter exponent number(exponent = 1 end)¡G");
		scanf_s("%d", &exponent);
		if (exponent == 1)
		{
			break;
		}
		else
		{
			power = 1;
			for (int i = 0; exponent > i; i++)
			{
				power = power * base;
			}
			printf("%d^%d = %d\n\n", base, exponent, power);
		}
		
	}
	system("pause");
	return 0;
}

